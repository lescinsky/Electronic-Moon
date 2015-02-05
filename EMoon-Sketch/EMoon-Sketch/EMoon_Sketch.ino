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

activePrimitiveLightshowList* APL_list;
activePhysicalStripList* APS_list;
eMoonFrame f;
unsigned long startTime, endTime;






//
// Brief	Setup
//
void setup() {

    // allocate lightshow runtime structures
    APL_list = new activePrimitiveLightshowList();
     // allocate pixel strip runtime structures
    APS_list = new activePhysicalStripList();
    // activate master lightshow
    // initialise timekeeping
    f = 0;
    startTime = millis();
    

}

//
// Brief	Loop
//
// Add loop code
void loop() {

    // call the lightshow(s) update functions
    APL_list->currentUpdateFunction->update(f, APS_list->currentStrip);
    // show the strip(s)
    APS_list->showAll();
    // wait before next frame, for situations where lightshows play too quickly
    while ((endTime = millis()) - startTime < minFrametime);
    startTime = endTime;
    ++f;


    
}
