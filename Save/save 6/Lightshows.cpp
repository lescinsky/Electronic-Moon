//  Automatically Generated code  

#include "Lightshows.h"


extern activePhysicalStripList* APS_list;
extern activePrimitiveLightshowList* APL_list;
extern activeSymbolicLightshowList* mix_list;


uint32_t rainbowSpreadCX() {return(61440);}
uint32_t rainbowSpreadC0() {return(61440);}
uint32_t rainbowSpreadC1() {return(15728640);}
uint32_t rainbowSpreadC2() {return(0);}
uint32_t rainbowSpreadC3() {return(240);}
void rainbowSpread(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 0, &rainbowSpreadCX, &rainbowSpreadC0, &rainbowSpreadC1, &rainbowSpreadC2, &rainbowSpreadC3); }



uint32_t redFadeCX() {return(0);}
uint32_t redFadeC0() {return(0);}
uint32_t redFadeC1() {return(32768);}
void redFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &redFadeCX, &redFadeC0, &redFadeC1); }



uint32_t gordon1CX() {return(61680);}
uint32_t gordon1C0() {return(61680);}
uint32_t gordon1C1() {return(15728880);}
uint32_t gordon1C2() {return(15790080);}
uint32_t gordon1C3() {return(15790320);}
void gordon1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 1, &gordon1CX, &gordon1C0, &gordon1C1, &gordon1C2, &gordon1C3); }



uint32_t blackFadeCX() {return(32768);}
uint32_t blackFadeC0() {return(32768);}
uint32_t blackFadeC1() {return(0);}
void blackFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &blackFadeCX, &blackFadeC0, &blackFadeC1); }



uint32_t gordon2CX() {return(8421376);}
uint32_t gordon2C0() {return(8421376);}
uint32_t gordon2C1() {return(8388848);}
uint32_t gordon2C2() {return(8450048);}
uint32_t gordon2C3() {return(15728768);}
void gordon2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 1, &gordon2CX, &gordon2C0, &gordon2C1, &gordon2C2, &gordon2C3); }



uint32_t redRedCX() {return(8388608);}
uint32_t redRedC0() {return(8388608);}
uint32_t redRedC1() {return(128);}
void redRed(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &redRedCX, &redRedC0, &redRedC1); }



uint32_t gordon3CX() {return(33008);}
uint32_t gordon3C0() {return(33008);}
uint32_t gordon3C1() {return(61568);}
uint32_t gordon3C2() {return(32768);}
uint32_t gordon3C3() {return(128);}
void gordon3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 1, &gordon3CX, &gordon3C0, &gordon3C1, &gordon3C2, &gordon3C3); }



uint32_t redGreenCX() {return(0);}
uint32_t redGreenC0() {return(0);}
uint32_t redGreenC1() {return(128);}
void redGreen(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &redGreenCX, &redGreenC0, &redGreenC1); }



uint32_t backGreenCX() {return(0);}
uint32_t backGreenC0() {return(0);}
uint32_t backGreenC1() {return(32768);}
void backGreen(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &backGreenCX, &backGreenC0, &backGreenC1); }



uint32_t greenBlackCX() {return(32768);}
uint32_t greenBlackC0() {return(32768);}
uint32_t greenBlackC1() {return(0);}
void greenBlack(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &greenBlackCX, &greenBlackC0, &greenBlackC1); }



uint32_t greenBlueCX() {return(32768);}
uint32_t greenBlueC0() {return(32768);}
uint32_t greenBlueC1() {return(128);}
void greenBlue(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &greenBlueCX, &greenBlueC0, &greenBlueC1); }



uint32_t mardigrasCX() {return(32832);}
uint32_t mardigrasC0() {return(32832);}
uint32_t mardigrasC1() {return(8404992);}
uint32_t mardigrasC2() {return(4194432);}
uint32_t mardigrasC3() {return(4227072);}
void mardigras (eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 1, &mardigrasCX, &mardigrasC0, &mardigrasC1, &mardigrasC2, &mardigrasC3); }

Adafruit_NeoPixel* pod0 = new Adafruit_NeoPixel(32, 0, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* pod1 = new Adafruit_NeoPixel(32, 1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod2 = new Adafruit_NeoPixel(32, 2, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* pod3 = new Adafruit_NeoPixel(32, 3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod4 = new Adafruit_NeoPixel(32, 4, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* pod5 = new Adafruit_NeoPixel(32, 5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod6 = new Adafruit_NeoPixel(32, 6, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* pod7 = new Adafruit_NeoPixel(32, 7, NEO_GRB + NEO_KHZ800);


void setupStrips() {
   APS_list->addStrip(pod0);
   APS_list->addStrip(pod1);
   APS_list->addStrip(pod2);
    APS_list->addStrip(pod3);
    APS_list->addStrip(pod4);
    APS_list->addStrip(pod5);
    APS_list->addStrip(pod6);
    APS_list->addStrip(pod7);




}







