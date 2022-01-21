// Python includes
#include <Python.h>

#include "decoder.h"

// STD includes
#include <stdio.h>

//-----------------------------------------------------------------------------
static PyObject *decode_BLE(PyObject *self, PyObject *args)
{
  // Unpack a string from the arguments
  const char *strArg;
  if (!PyArg_ParseTuple(args, "s", &strArg))
    return NULL;

  StaticJsonDocument<1024> doc;
  DeserializationError err = deserializeJson(doc, strArg);
  if (!err) {
    TheengsDecoder decoder;
    JsonObject bleObject;
    bleObject = doc.as<JsonObject>();

    if (decoder.decodeBLEJson(bleObject) >= 0) {
      std::string buf;
      bleObject.remove("servicedata");
      bleObject.remove("manufacturerdata");
      bleObject.remove("servicedatauuid");
      serializeJson(bleObject, buf);
      return Py_BuildValue("s", buf.c_str());
    }
  }

  Py_RETURN_NONE;
}

static PyObject *decode_getTheengProperties(PyObject *self, PyObject *args)
{
  const char *strArg;
  if (!PyArg_ParseTuple(args, "s", &strArg))
    return NULL;

  TheengsDecoder decoder;
  std::string prop = decoder.getTheengProperties(strArg);
  if (!prop.empty()) {
    return Py_BuildValue("s", prop.c_str());
  }

  Py_RETURN_NONE;
}

static PyObject *decode_getTheengAttribute(PyObject *self, PyObject *args)
{
  const char *model;
  const char *att;
  if (!PyArg_ParseTuple(args, "ss", &model, &att))
    return NULL;

  TheengsDecoder decoder;
  std::string prop = decoder.getTheengAttribute(model, att);
  if (!prop.empty()) {
    return Py_BuildValue("s", prop.c_str());
  }

  Py_RETURN_NONE;
}

//-----------------------------------------------------------------------------
static PyMethodDef decoder_methods[] = {
  {
    "decodeBLE",
    decode_BLE,
    METH_VARARGS,
    "Decodes a BLE advertisement packet into JSON data."
  },
  {
    "getAttribute",
    decode_getTheengAttribute,
    METH_VARARGS,
    "Decodes a BLE advertisement packet into JSON data."
  },
  {
    "getProperties",
    decode_getTheengProperties,
    METH_VARARGS,
    "Decodes a BLE advertisement packet into JSON data."
  },
  {NULL, NULL, 0, NULL}        /* Sentinel */
};

//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC init_decoder(void)
{
  (void) Py_InitModule("_decoder", decoder_methods);
}
#else /* PY_MAJOR_VERSION >= 3 */
static struct PyModuleDef decoder_module_def = {
  PyModuleDef_HEAD_INIT,
  "_decoder",
  "Internal \"_decoder\" module",
  -1,
  decoder_methods
};

PyMODINIT_FUNC PyInit__decoder(void)
{
  return PyModule_Create(&decoder_module_def);
}
#endif /* PY_MAJOR_VERSION >= 3 */
