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
// the minimum length of time a frame can take (1/16 of a second)
const unsigned long minFrametime = 32;

//
class updateFunction {
    
public:
    // Constructor
    updateFunction();
    
    void update(eMoonFrame f, Adafruit_NeoPixel* strip);
};

//
class activePrimitiveLightshowList {
    
public:
    
    // Constructor
    activePrimitiveLightshowList();
    
    updateFunction* currentUpdateFunction;
};

//
class activePhysicalStripList {
    
public:
    
    // Constructor
    activePhysicalStripList();
    void showAll();
    Adafruit_NeoPixel* currentStrip;
};










#endif /* defined(__EMoon_Sketch__EMoonClasses__) */
