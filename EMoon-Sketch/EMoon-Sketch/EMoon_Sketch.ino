//
// EMoon-Sketch
//
// Description of the project
// Developed with [embedXcode](http://embedXcode.weebly.com)
//
// Author 		Gordon Lescinsky
// 				Gordon Lescinsky
//
// Date			5/02/2015 4:26 pm
// Version		<#version#>
//
// Copyright	© Gordon Lescinsky, 2015
// Licence		<#license#>
//
// See         ReadMe.txt for references
//


// Core library for code-sense - IDE-based

#include "Arduino.h"


// Local Library specifies LED hardware libraries such as Adafruit API
#include "LocalLibrary.h"
#include "EMoonClasses.h"
#include "Lightshows.h"
#include "Strips.h"

// the minimum length of time a frame can take (1/32 of a second)
extern eMoonFrame currentFrame;
const unsigned long minFrametime = 32;
unsigned long startTime, endTime;

extern masterLightshow* master;
extern activePrimitiveLightshowList* APL_list;
activePhysicalStripList* APS_list;







//
// Brief	Setup
//
void setup() {

    // allocate pixel strip runtime structures
    APS_list = new activePhysicalStripList();
    // allocate lightshow runtime structures
    master->addLightshow(0, 400, APS_list->currentStrip);
    master->addLightshow(1, 200, APS_list->currentStrip);
    // activate master lightshow
    master->activatePrimitiveLightshow();
    // initialise timekeeping
    currentFrame = 0;
    startTime = millis();
    

}

//
// Brief	Loop
//
// Add loop code
void loop() {

    // call the lightshow(s) update functions
    APL_list->updateAll();
    // show the strip(s)
    APS_list->showAll();
    // wait before next frame, for situations where lightshows play too quickly
    while ((endTime = millis()) - startTime < minFrametime);
    startTime = endTime;
    ++currentFrame;


    
}
