//  Automatically Generated code  

#include "Lightshows.h"
#include "Strips.h"

extern masterLightshow* master;
extern activePhysicalStripList* APS_list;




uint32_t rainbowSpreadCX() {return(8388608);}
uint32_t rainbowSpreadC0() {return(32768);}
uint32_t rainbowSpreadC1() {return(-8388608);}
uint32_t rainbowSpreadC2() {return(-32640);}
uint32_t rainbowSpreadC3() {return(8388480);}
void rainbowSpread(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 4, &rainbowSpreadCX, &rainbowSpreadC0, &rainbowSpreadC1, &rainbowSpreadC2, &rainbowSpreadC3); }



uint32_t redFadeCX() {return(0);}
uint32_t redFadeC0() {return(8388608);}
uint32_t redFadeC1() {return(-8355841);}
void redFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &redFadeCX, &redFadeC0, &redFadeC1); }



Adafruit_NeoPixel* strip1 = new Adafruit_NeoPixel(32, 9, NEO_GRB + NEO_KHZ800);


void setupStrips() {
    
    APS_list->addStrip(strip1);
    
}

void setupMasterLightshow() {
    
    master->addLightshow(128, strip1, &rainbowSpread);
    master->addLightshow(256, strip1, &redFade);
    
}





