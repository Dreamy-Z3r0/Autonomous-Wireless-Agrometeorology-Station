#ifndef _LIBRARIES_H_
#define _LIBRARIES_H_


/****************************************************
 *** Built-in and community-contributed libraries ***
 ****************************************************/

#include <Arduino.h>

// Basic communication protocols
#include <Wire.h>
#include <SPI.h>

// LoRa
#include <LoRa.h>

// Logger with an SD card
// #include <SD.h>

// Real-time clock DS3231
#include <DS3231.h>

// Temperature - Humidity - Barometric pressure sensor BME280
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

// Temperature sensor DS18B20
#include <OneWire.h>


/**********************
 *** Custom classes ***
 **********************/

// Time handler
#include "Custom/RTC.h"

// Sensor configuration and control
#include "Custom/SensorUnits/Sensor_Base.h"

#include "Custom/SensorUnits/Anemometer.h"
#include "Custom/SensorUnits/Wind_Vane.h"
#include "Custom/SensorUnits/Precipitation.h"
#include "Custom/SensorUnits/Thermometer_Hygrometer_Barometer.h"

#include "Custom/Sensor_Control.h"

// Data exchange
#include "Custom/SX1278_LoRa.h"

#endif