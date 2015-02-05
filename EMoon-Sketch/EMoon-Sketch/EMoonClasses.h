//
//  EMoonClasses.h
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Sketch__EMoonClasses__
#define __EMoon_Sketch__EMoonClasses__

#include <stdio.h>
#include "LocalLibrary.h"

typedef uint32_t eMoonFrame;



//
class updateFunction {
    
public:
    // Constructor
    updateFunction();
    
    void update(eMoonFrame f, Adafruit_NeoPixel* strip);
};




//-------Active Primitive Lightshow---------
class masterLightshow;
class activePrimitiveLightshow {
    
public:
    // Constructor
    activePrimitiveLightshow(eMoonFrame duration, Adafruit_NeoPixel* strip);
    void activate();
    void update();
    
private:
    eMoonFrame duration;
    eMoonFrame startFrame;
    Adafruit_NeoPixel* strip;
    masterLightshow* parent;
    
    
};


//-------APL LIST---------
class activePrimitiveLightshowList {
    
public:
    
    // Constructor
    activePrimitiveLightshowList();
    void addLightshow(activePrimitiveLightshow* lightshow);
    void updateAll();
    
private:
    activePrimitiveLightshow *lightshowTable[10];
};

//-------Master Lightshow---------
class masterLightshow {
    
public:
    // Constructor
    masterLightshow();
    void addLightshow(int masterIndex, eMoonFrame duration, Adafruit_NeoPixel* strip);
    void activatePrimitiveLightshow();
    void deactivatePrimitiveLightshow();
    
private:
    activePrimitiveLightshow *lightshowTable[10];
    int indexTicker;
    
    
};

//-------APS LIST---------
class activePhysicalStripList {
    
public:
    
    // Constructor
    activePhysicalStripList();
    void showAll();
    Adafruit_NeoPixel* currentStrip;
};










#endif /* defined(__EMoon_Sketch__EMoonClasses__) */
