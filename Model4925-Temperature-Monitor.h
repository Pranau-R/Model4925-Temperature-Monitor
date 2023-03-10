/*

Name:   Model4925-Temperature-Monitor.h

Function:
        Global linkage for Model4925-Temperature-Monitor.ino

Copyright:
        See accompanying LICENSE file for copyright and license information.

Author:
        Pranau R, MCCI Corporation   February 2023

*/

#ifndef _Model4925-Temperature-Monitor_h_
# define _Model4925-Temperature-Monitor_h_

#pragma once

#include <Catena.h>
#include <Catena_Led.h>
#include <Catena_Mx25v8035f.h>
#include <Catena_Timer.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <SPI.h>
#include "Model4925_cMeasurementLoop.h"

//  The global clock object

extern  McciCatena::Catena                      gCatena;
extern  McciCatena::cTimer                      ledTimer;
extern  McciCatena::Catena::LoRaWAN             gLoRaWAN;
extern  McciCatena::StatusLed                   gLed;

extern  SPIClass                                gSPI2;
extern  McciModel4925::cMeasurementLoop         gMeasurementLoop;

//  The Temp Probe
extern  OneWire                                 oneWire;
extern  DallasTemperature                       sensor_CompostTemp;
extern bool                                     fHasCompostTemp;

//  The flash
extern  McciCatena::Catena_Mx25v8035f           gFlash;

#endif // !defined(_Model4925-Temperature-Monitor_h_)