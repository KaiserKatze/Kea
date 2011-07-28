// Copyright (C) 2010  Internet Systems Consortium, Inc. ("ISC")
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

// BEGIN_HEADER_GUARD

#include <string>

#include <dns/name.h>
#include <dns/rdata.h>

#include <util/buffer.h>
#include <dns/exceptions.h>
#include <dns/messagerenderer.h>
#include <dns/rrparamregistry.h>

// BEGIN_ISC_NAMESPACE

// BEGIN_COMMON_DECLARATIONS
// END_COMMON_DECLARATIONS

// BEGIN_RDATA_NAMESPACE

#include <dns/rdata/generic/detail/txt_like.h>

class TXT : public TXT_LIKE<TXT, 16> {
    friend class TXT_LIKE<TXT, 16>;
    static string const id;

public:
    // BEGIN_COMMON_MEMBERS
    // END_COMMON_MEMBERS

};

///    explicit TXT(const std::string& type_str);
inline TXT::TXT(const std::string& type_str) : TXT_LIKE<TXT, 16>(type_str) {}

///    TXT(isc::util::InputBuffer& buffer, size_t rdata_len);
inline TXT::TXT(isc::util::InputBuffer& buffer, size_t rdata_len) : TXT_LIKE<TXT, 16>(buffer, rdata_len) {}

///    TXT(const TXT& other);
inline TXT::TXT(const TXT& other) : TXT_LIKE<TXT, 16>(other) {}

///    virtual std::string toText() const;
inline std::string TXT::toText() const
{
    return TXT_LIKE<TXT, 16>::toText();
}

///    virtual void toWire(isc::util::OutputBuffer& buffer) const;
inline void TXT::toWire(isc::util::OutputBuffer& buffer) const
{
    TXT_LIKE<TXT, 16>::toWire(buffer);
}

///    virtual void toWire(AbstractMessageRenderer& renderer) const;
inline void TXT::toWire(AbstractMessageRenderer& renderer) const
{
    TXT_LIKE<TXT, 16>::toWire(renderer);
}

///    virtual int compare(const Rdata& other) const;
inline int TXT::compare(const Rdata& other) const
{
    return TXT_LIKE<TXT, 16>::compare(other);
}

// END_RDATA_NAMESPACE
// END_ISC_NAMESPACE
// END_HEADER_GUARD

// Local Variables: 
// mode: c++
// End: 
