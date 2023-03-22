#include <Arduino.h>

#define ARDUINOJSON_USE_LONG_LONG 1
#include "ArduinoJson.h"

#include "NimBLEDevice.h"
#include "decoder.h"

NimBLEScan* pBLEScan;

TheengsDecoder decoder;

StaticJsonDocument<512> doc;

class MyAdvertisedDeviceCallbacks: public NimBLEAdvertisedDeviceCallbacks {

  std::string convertServiceData(std::string deviceServiceData) {
    int serviceDataLength = (int)deviceServiceData.length();
    char spr[2 * serviceDataLength + 1];
    for (int i = 0; i < serviceDataLength; i++) sprintf(spr + 2 * i, "%.2x", (unsigned char)deviceServiceData[i]);
    spr[2 * serviceDataLength] = 0;
    return spr;
  }

  void onResult(BLEAdvertisedDevice* advertisedDevice) {
    Serial.printf("Advertised Device: %s \n", advertisedDevice->toString().c_str());
    JsonObject BLEdata = doc.to<JsonObject>();
    String mac_adress = advertisedDevice->getAddress().toString().c_str();
    mac_adress.toUpperCase();
    BLEdata["id"] = (char*)mac_adress.c_str();

    if (advertisedDevice->haveName())
      BLEdata["name"] = (char*)advertisedDevice->getName().c_str();

    if (advertisedDevice->haveManufacturerData()) {
      char* manufacturerdata = BLEUtils::buildHexData(NULL, (uint8_t*)advertisedDevice->getManufacturerData().data(), advertisedDevice->getManufacturerData().length());
      BLEdata["manufacturerdata"] = manufacturerdata;
      free(manufacturerdata);
    }

    if (advertisedDevice->haveRSSI())
      BLEdata["rssi"] = (int)advertisedDevice->getRSSI();

    if (advertisedDevice->haveTXPower())
      BLEdata["txpower"] = (int8_t)advertisedDevice->getTXPower();

    if (advertisedDevice->haveServiceData()) {
      int serviceDataCount = advertisedDevice->getServiceDataCount();
      for (int j = 0; j < serviceDataCount; j++) {
        std::string service_data = convertServiceData(advertisedDevice->getServiceData(j));
        BLEdata["servicedata"] = (char*)service_data.c_str();
        std::string serviceDatauuid = advertisedDevice->getServiceDataUUID(j).toString();
        BLEdata["servicedatauuid"] = (char*)serviceDatauuid.c_str();
      }
    }

    if (decoder.decodeBLEJson(BLEdata)) {
      BLEdata.remove("manufacturerdata");
      BLEdata.remove("servicedata");
      BLEdata.remove("servicedatauuid");
      BLEdata.remove("type");
      BLEdata.remove("cidc");
      BLEdata.remove("acts");
      BLEdata.remove("cont");
      BLEdata.remove("track");
      Serial.print("TheengsDecoder found device: ");
      serializeJson(BLEdata, Serial);
      Serial.println("");
    }
  }
};

void setup() {
  Serial.begin(115200);
  Serial.println("Scanning...");
  NimBLEDevice::setScanFilterMode(CONFIG_BTDM_SCAN_DUPL_TYPE_DEVICE);
  NimBLEDevice::setScanDuplicateCacheSize(200);
  NimBLEDevice::init("");

  pBLEScan = NimBLEDevice::getScan(); //create new scan
  // Set the callback for when devices are discovered, no duplicates.
  pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks(), false);
  pBLEScan->setActiveScan(true); // Set active scanning, this will get more data from the advertiser.
  pBLEScan->setInterval(97); // How often the scan occurs / switches channels; in milliseconds,
  pBLEScan->setWindow(37);  // How long to scan during the interval; in milliseconds.
  pBLEScan->setMaxResults(0); // do not store the scan results, use callback only.
}

void loop() {
  // If an error occurs that stops the scan, it will be restarted here.
  if(pBLEScan->isScanning() == false) {
      // Start scan with: duration = 0 seconds(forever), no scan end callback, not a continuation of a previous scan.
      pBLEScan->start(0, nullptr, false);
  }

  delay(2000);
}