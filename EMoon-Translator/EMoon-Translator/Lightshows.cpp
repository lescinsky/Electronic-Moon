//  Automatically Generated code  

#include "Lightshows.h"





uint32_t rainbowSpreadCX() {return(8388608);}
uint32_t rainbowSpreadC0() {return(32768);}
uint32_t rainbowSpreadC1() {return(-8388608);}
uint32_t rainbowSpreadC2() {return(-32640);}
uint32_t rainbowSpreadC3() {return(8388480);}
void rainbowSpread(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 4, rainbowSpreadCX, rainbowSpreadC0, rainbowSpreadC1, rainbowSpreadC2, rainbowSpreadC3); }



uint32_t redFadeCX() {return(0);}
uint32_t redFadeC0() {return(8388608);}
uint32_t redFadeC1() {return(-8355841);}
void redFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, redFadeCX, redFadeC0, redFadeC1); }





