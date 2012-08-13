// Copyright (C) 2012  Internet Systems Consortium, Inc. ("ISC")
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.

#include <util/buffer.h>
#include <util/memory_segment_local.h>

#include <dns/rrset.h>
#include <dns/rrclass.h>
#include <dns/rrtype.h>
#include <dns/rrttl.h>

#include <datasrc/memory/rdata_encoder.h>
#include <datasrc/memory/rdataset.h>

#include <testutils/dnsmessage_test.h>

#include <gtest/gtest.h>

using namespace isc::dns;
using namespace isc::datasrc::memory;
using namespace isc::testutils;

namespace {

class RdataSetTest : public ::testing::Test {
protected:
    RdataSetTest() :
        // 1076895760 = 0x40302010.  Use this so we fill in all 8-bit "field"
        // of the 32-bit TTL
        a_rrset_(textToRRset("www.example.com. 1076895760 IN A 192.0.2.1"))
    {}
    void TearDown() {
        EXPECT_TRUE(mem_sgmt_.allMemoryDeallocated());
    }

    ConstRRsetPtr a_rrset_;
    isc::util::MemorySegmentLocal mem_sgmt_;
    RdataEncoder encoder_;
};

// Convert the given 32-bit integer (network byte order) to the corresponding
// RRTTL object.
RRTTL
restoreTTL(const void* ttl_data) {
    isc::util::InputBuffer b(ttl_data, sizeof(uint32_t));
    return (RRTTL(b));
}

TEST_F(RdataSetTest, create) {
    // A simple case of creating an RdataSet.  Confirming the resulting
    // fields have the expected values, and then destroying it (TearDown()
    // would detect any memory leak)
    RdataSet* rdataset = RdataSet::create(mem_sgmt_, encoder_, a_rrset_,
                                          ConstRRsetPtr());
    EXPECT_EQ(RRType::A(), rdataset->type);
    EXPECT_EQ(RRTTL(1076895760), restoreTTL(rdataset->getTTLData()));
    EXPECT_EQ(1, rdataset->getRdataCount());
    EXPECT_EQ(0, rdataset->getSigRdataCount());
    RdataSet::destroy(mem_sgmt_, RRClass::IN(), rdataset);
}
}
