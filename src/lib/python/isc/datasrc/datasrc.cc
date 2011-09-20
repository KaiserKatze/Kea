// Copyright (C) 2011  Internet Systems Consortium, Inc. ("ISC")
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

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <structmember.h>

#include <config.h>

#include <datasrc/client.h>
#include <datasrc/database.h>
#include <datasrc/sqlite3_accessor.h>

#include "datasrc.h"
#include "client_python.h"
#include "finder_python.h"
#include "iterator_python.h"
#include "updater_python.h"

#include <util/python/pycppwrapper_util.h>
#include <dns/python/pydnspp_common.h>

using namespace isc::datasrc;
using namespace isc::datasrc::python;
using namespace isc::util::python;
using namespace isc::dns::python;

namespace isc {
namespace datasrc {
namespace python {
PyObject*
getDataSourceException(const char* ex_name) {
    PyObject* ex_obj = NULL;

    PyObject* acl_module = PyImport_AddModule("isc.datasrc");
    if (acl_module != NULL) {
        PyObject* acl_dict = PyModule_GetDict(acl_module);
        if (acl_dict != NULL) {
            ex_obj = PyDict_GetItemString(acl_dict, ex_name);
        }
    }

    if (ex_obj == NULL) {
        ex_obj = PyExc_RuntimeError;
    }
    return (ex_obj);
}

} // end namespace python
} // end namespace datasrc
} // end namespace isc

namespace {

bool
initModulePart_DataSourceClient(PyObject* mod) {
    // We initialize the static description object with PyType_Ready(),
    // then add it to the module. This is not just a check! (leaving
    // this out results in segmentation faults)
    if (PyType_Ready(&datasourceclient_type) < 0) {
        return (false);
    }
    void* dscp = &datasourceclient_type;
    if (PyModule_AddObject(mod, "DataSourceClient", static_cast<PyObject*>(dscp)) < 0) {
        return (false);
    }
    Py_INCREF(&datasourceclient_type);

    addClassVariable(datasourceclient_type, "SUCCESS",
                     Py_BuildValue("I", result::SUCCESS));
    addClassVariable(datasourceclient_type, "EXIST",
                     Py_BuildValue("I", result::EXIST));
    addClassVariable(datasourceclient_type, "NOTFOUND",
                     Py_BuildValue("I", result::NOTFOUND));
    addClassVariable(datasourceclient_type, "PARTIALMATCH",
                     Py_BuildValue("I", result::PARTIALMATCH));

    return (true);
}

bool
initModulePart_ZoneFinder(PyObject* mod) {
    // We initialize the static description object with PyType_Ready(),
    // then add it to the module. This is not just a check! (leaving
    // this out results in segmentation faults)
    if (PyType_Ready(&zonefinder_type) < 0) {
        return (false);
    }
    void* zip = &zonefinder_type;
    if (PyModule_AddObject(mod, "ZoneFinder", static_cast<PyObject*>(zip)) < 0) {
        return (false);
    }
    Py_INCREF(&zonefinder_type);

    addClassVariable(zonefinder_type, "SUCCESS",
                     Py_BuildValue("I", ZoneFinder::SUCCESS));
    addClassVariable(zonefinder_type, "DELEGATION",
                     Py_BuildValue("I", ZoneFinder::DELEGATION));
    addClassVariable(zonefinder_type, "NXDOMAIN",
                     Py_BuildValue("I", ZoneFinder::NXDOMAIN));
    addClassVariable(zonefinder_type, "NXRRSET",
                     Py_BuildValue("I", ZoneFinder::NXRRSET));
    addClassVariable(zonefinder_type, "CNAME",
                     Py_BuildValue("I", ZoneFinder::CNAME));
    addClassVariable(zonefinder_type, "DNAME",
                     Py_BuildValue("I", ZoneFinder::DNAME));

    addClassVariable(zonefinder_type, "FIND_DEFAULT",
                     Py_BuildValue("I", ZoneFinder::FIND_DEFAULT));
    addClassVariable(zonefinder_type, "FIND_GLUE_OK",
                     Py_BuildValue("I", ZoneFinder::FIND_GLUE_OK));
    addClassVariable(zonefinder_type, "FIND_DNSSEC",
                     Py_BuildValue("I", ZoneFinder::FIND_DNSSEC));


    return (true);
}

bool
initModulePart_ZoneIterator(PyObject* mod) {
    // We initialize the static description object with PyType_Ready(),
    // then add it to the module. This is not just a check! (leaving
    // this out results in segmentation faults)
    if (PyType_Ready(&zoneiterator_type) < 0) {
        return (false);
    }
    void* zip = &zoneiterator_type;
    if (PyModule_AddObject(mod, "ZoneIterator", static_cast<PyObject*>(zip)) < 0) {
        return (false);
    }
    Py_INCREF(&zoneiterator_type);

    return (true);
}

bool
initModulePart_ZoneUpdater(PyObject* mod) {
    // We initialize the static description object with PyType_Ready(),
    // then add it to the module. This is not just a check! (leaving
    // this out results in segmentation faults)
    if (PyType_Ready(&zoneupdater_type) < 0) {
        return (false);
    }
    void* zip = &zoneupdater_type;
    if (PyModule_AddObject(mod, "ZoneUpdater", static_cast<PyObject*>(zip)) < 0) {
        return (false);
    }
    Py_INCREF(&zoneupdater_type);

    return (true);
}


PyObject* po_DataSourceError;
PyObject* po_NotImplemented;

PyModuleDef iscDataSrc = {
    { PyObject_HEAD_INIT(NULL) NULL, 0, NULL},
    "datasrc",
    "Python bindings for the classes in the isc::datasrc namespace.\n\n"
    "These bindings are close match to the C++ API, but they are not complete "
    "(some parts are not needed) and some are done in more python-like ways.",
    -1,
    NULL,// TODO do we need module-level functions?
    NULL,
    NULL,
    NULL,
    NULL
};

} // end anonymous namespace

PyMODINIT_FUNC
PyInit_datasrc(void) {
    PyObject* mod = PyModule_Create(&iscDataSrc);
    if (mod == NULL) {
        return (NULL);
    }

    if (!initModulePart_DataSourceClient(mod)) {
        Py_DECREF(mod);
        return (NULL);
    }

    if (!initModulePart_ZoneFinder(mod)) {
        Py_DECREF(mod);
        return (NULL);
    }

    if (!initModulePart_ZoneIterator(mod)) {
        Py_DECREF(mod);
        return (NULL);
    }

    if (!initModulePart_ZoneUpdater(mod)) {
        Py_DECREF(mod);
        return (NULL);
    }

    try {
        po_DataSourceError = PyErr_NewException("isc.datasrc.Error", NULL,
                                                NULL);
        PyObjectContainer(po_DataSourceError).installToModule(mod, "Error");
        po_NotImplemented = PyErr_NewException("isc.datasrc.NotImplemented",
                                               NULL, NULL);
        PyObjectContainer(po_NotImplemented).installToModule(mod,
                                                             "NotImplemented");
    } catch (...) {
        Py_DECREF(mod);
        return (NULL);
    }

    return (mod);
}
