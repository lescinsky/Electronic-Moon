//
// File			LocalLibrary.h
// Brief		Specifies LED Hardware libraries
//
// Project	 	EMoon-Sketch
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author		Gordon Lescinsky
// 				Gordon Lescinsky
// Date			5/02/2015 4:26 pm
// Version		<#version#>
// 
// Copyright	© Gordon Lescinsky, 2015
// Licence		<#license#>
//
// See			ReadMe.txt for references
//



// Core library for code-sense - IDE-based
#include "Arduino.h"

#ifndef EMoon_Sketch_LocalLibrary_h
#define EMoon_Sketch_LocalLibrary_h

//
#include <stdio.h>
#include "Adafruit_NeoPixel.h"

typedef uint32_t eMoonFrame;
typedef uint32_t eMoonColour;
typedef uint8_t eMoonSmoothness;
typedef  Adafruit_NeoPixel* eMoonStrip;
typedef void (*eMoonUpdateFunction)(eMoonFrame f, eMoonFrame duration, eMoonStrip strip);


//-------Active Primitive Lightshow---------
class masterLightshow;
struct activePrimitiveLightshow {
    
    eMoonFrame duration;
    eMoonFrame startFrame;
    eMoonStrip strip;
    masterLightshow* parent;
    eMoonUpdateFunction update;
};


//-------APL LIST---------
class activePrimitiveLightshowList {
    
public:
    
    // Constructor
    activePrimitiveLightshowList();
    void addLightshow(eMoonFrame duration, eMoonStrip strip, eMoonUpdateFunction update);
    void updateAll();
    
private:
    activePrimitiveLightshow lightshowTable[256];
    void  blankLightshow(activePrimitiveLightshow* lightshow);
};

//-------Master Lightshow---------
class masterLightshow {
    
public:
    // Constructor
    masterLightshow();
    void addLightshow(eMoonFrame duration, eMoonStrip strip, eMoonUpdateFunction update);
    void activateNextLightshow();
    
private:
    activePrimitiveLightshow lightshowTable[256];
    int indexTicker, numItems;
    
};

//-------APS LIST---------
class activePhysicalStripList {
    
public:
    
    // Constructor
    activePhysicalStripList();
    void addStrip(Adafruit_NeoPixel* strip);
    void showAll();
    
private:
    eMoonStrip stripTable[256];
    int numItems;
};





#endif
