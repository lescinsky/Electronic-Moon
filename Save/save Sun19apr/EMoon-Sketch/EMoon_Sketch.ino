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
#include "EMoonDesign.h"
#include "Lightshow_Setup.h"

// the minimum length of time a frame can take (1/32 of a second)
extern eMoonFrame currentFrame;

unsigned long startTime, endTime;
extern activeSymbolicLightshowList* mix_list;
extern activePrimitiveLightshowList* APL_list;
extern activePhysicalStripList* APS_list;

// Manual setup of lightshows

const unsigned long minFrametime = 32;  // determines the length of one "frame" in milliseconds  (32 ~ 1/32 of a second)


// Define the strips -- you need to know which pin and how many LEDs
//   Parameter 1 = number of pixels in strip
//   Parameter 2 = Arduino pin number (most are valid)
//   Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)



// Add the strips to the list of strips.  If you don't do this, they won't light up!
//    !!! You can currently only add 10.  And please don't add any twice!!!

void myStrips() {
    
//    APS_list->addStrip(myStrip);
    setupStrips();
    
}


// Write your own lightshows, by defining "update functions"
//    The function signature must be :
//    (eMoonFrame f, Adafruit_NeoPixel* strip)
//    f = the current frame ( 0 = the first frame of the lightshow)   !Bug--we currently are starting the lightshows at f = 1!!!
//    duration = the number of frames the lightshow will run
//    strip = a NeoPixel strip.  See the Adafruit library.  You will probably only need to use setPixelColor() and getPixelColor() methods.
//      However, the strip->Color(method is also useful).


//void update1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
//    
//    uint32_t c1 = 0x700000; // red
//    uint16_t i= f % strip->numPixels();  // advance the wipe one pixel each frame
//    strip->setPixelColor(i, c1);  // wipe
//    
//}
//
//void update2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
//    
//    uint32_t c1 = 0x007f00;  // green
//    uint16_t i= f % strip->numPixels();
//    strip->setPixelColor(i, c1);
//    
//}






// Add the lightshows to the master playlist.
//  !!Note, the lightshows play one after the other.  No way to define concurrent lightshows yet.  !!!And don't add more than 10 lightshows!!!
//    Use the addLightshow method (eMoonFrame duration, Adafruit_NeoPixel* strip, voidptrfunction updateFunction).
//    duration = the number of frames the lightshow will run.  Note that the frequency of frames is defined by minFrametime in this file).
//    strip = a NeoPixel strip.  See the Adafruit library.  Use strips that you have defined above.
//    update = one of the functions you have defined above.

void myMasterLightshow() {
    
    setupMasterLightshow();


}



void setup() {
    
    int A = 0;
    int B = 1;
    int C = 2;
    int D = 3;
    int G1 = 5;
    int G2 = 4;
    
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(G1, OUTPUT);
    pinMode(G2, OUTPUT);

    // initialise timekeeping
    currentFrame = 0;
    startTime = millis();
    
    // allocate pixel strip runtime structures
    myStrips();
    
//     allocate lightshow runtime structures
    myMasterLightshow();


}



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
