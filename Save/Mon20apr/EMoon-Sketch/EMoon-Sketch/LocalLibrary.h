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

#define EMOON_LISTLENGTH   1024

typedef uint32_t eMoonFrame;
typedef uint32_t eMoonColour;
typedef uint64_t eMoonSmoothness;
typedef  Adafruit_NeoPixel* eMoonStrip;
typedef void (*eMoonUpdateFunction)(eMoonFrame f, eMoonFrame duration, eMoonStrip strip);

typedef void (*eMoonSchedulerFunction)(eMoonFrame f, eMoonFrame duration, eMoonStrip strip, int index);







//-------Active Symbolic Lightshow---------

struct activeSymbolicLightshow {
    
    eMoonFrame duration;
    eMoonFrame startFrame;
    eMoonStrip strip;
    int parent;
    eMoonSchedulerFunction scheduler;
};

//-------Active Primitive Lightshow---------

struct activePrimitiveLightshow {
    
    eMoonFrame duration;
    eMoonFrame startFrame;
    eMoonStrip strip;
    int parent;
    eMoonUpdateFunction update;
    activePrimitiveLightshow* prev;
    activePrimitiveLightshow* next;
};




//-------APL LIST---------
class activePrimitiveLightshowList {
    
public:
    
    // Constructor
    activePrimitiveLightshowList();
    void addLightshow(int parentIndex, eMoonFrame duration, eMoonStrip strip, eMoonUpdateFunction update);
    void removeLightshow(int i);
    void updateAll();
    
private:
    activePrimitiveLightshow lightshowTable[EMOON_LISTLENGTH];
    int freeCellStack[EMOON_LISTLENGTH];
    int firstFree;
    activePrimitiveLightshow* firstLink;
    activePrimitiveLightshow* lastLink;
    void  blankLightshow(activePrimitiveLightshow* lightshow);
};

//-------Mix LIST---------
class activeSymbolicLightshowList {
    
public:
    
    // Constructor
    activeSymbolicLightshowList();
    void addLightshow(int parentIndex, eMoonFrame duration, eMoonStrip strip, eMoonSchedulerFunction scheduler);
    void activateNextLightshow(int i);
    void removeLightshow(int i);
    
private:
    activeSymbolicLightshow lightshowTable[EMOON_LISTLENGTH];
    int freeCellStack[EMOON_LISTLENGTH];
    int firstFree;
};


//-------APS LIST---------
class activePhysicalStripList {
    
public:
    
    // Constructor
    activePhysicalStripList();
    void addStrip(Adafruit_NeoPixel* strip);
    void showAll();
    
private:
    eMoonStrip stripTable[EMOON_LISTLENGTH];
    int numItems;
};




extern activePhysicalStripList* APS_list;
extern activePrimitiveLightshowList* APL_list;
extern activeSymbolicLightshowList* mix_list;


#endif
