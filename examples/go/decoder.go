package main

// #cgo LDFLAGS: -lstdc++ -L../../build -ldecoder
// #include "../../include/shared/theengs.h"
// #include "stdlib.h"
import "C"

import (
	"log"
	"unsafe"
)

type TheengsDecoder struct {
	ptr unsafe.Pointer
}

func NewDecoder() TheengsDecoder {
	return TheengsDecoder{
		ptr: C.Theengs_NewDecoder(),
	}
}

func (d TheengsDecoder) Destroy() {
	C.Theengs_DestroyDecoder(d.ptr)
}

func (d TheengsDecoder) DecodeBLE(json_data string) string {
	cs_data := C.CString(json_data)
	cs_result := C.Theengs_DecodeBLE(d.ptr, cs_data)
	result := C.GoString(cs_result)
	C.free(unsafe.Pointer(cs_data))
	C.free(unsafe.Pointer(cs_result))
	return result
}

func (d TheengsDecoder) GetProperties(model_id string) string {
	cs_model := C.CString(model_id)
	cs_result := C.Theengs_GetProperties(d.ptr, cs_model)
	result := C.GoString(cs_result)
	C.free(unsafe.Pointer(cs_model))
	C.free(unsafe.Pointer(cs_result))
	return result
}

func (d TheengsDecoder) GetAttribute(model_id string, attribute string) string {
	cs_model := C.CString(model_id)
	cs_attr := C.CString(attribute)
	cs_result := C.Theengs_GetAttribute(d.ptr, cs_model, cs_attr)
	result := C.GoString(cs_result)
	C.free(unsafe.Pointer(cs_model))
	C.free(unsafe.Pointer(cs_attr))
	C.free(unsafe.Pointer(cs_result))
	return result
}

func main() {

	json_data := `{"id":"redacted","mac_type":0,"adv_type":0,"name":"LYWSD02","rssi":-67,"servicedata":"70205b043941e480012ee7090a10012500","servicedatauuid":"0xfe95"}`

	decoder := NewDecoder()
	data := decoder.DecodeBLE(json_data)
	props := decoder.GetProperties("LYWSD02")
	brand := decoder.GetAttribute("LYWSD02", "brand")
	model := decoder.GetAttribute("LYWSD02", "model")

	log.Println(data)
	log.Println(props)
	log.Printf("brand: %v, model: %v\n", brand, model)
}
