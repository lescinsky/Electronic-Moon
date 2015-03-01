//  Automatically Generated code  

#include "Lightshows.h"


extern activePhysicalStripList* APS_list;
extern activePrimitiveLightshowList* APL_list;
extern activeSymbolicLightshowList* mix_list;


uint32_t rainbowSpreadCX() {return(32896);}
uint32_t rainbowSpreadC0() {return(32896);}
uint32_t rainbowSpreadC1() {return(8388736);}
uint32_t rainbowSpreadC2() {return(0);}
uint32_t rainbowSpreadC3() {return(8421504);}
void rainbowSpread(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &rainbowSpreadCX, &rainbowSpreadC0, &rainbowSpreadC1, &rainbowSpreadC2, &rainbowSpreadC3); }



uint32_t redFadeCX() {return(0);}
uint32_t redFadeC0() {return(0);}
uint32_t redFadeC1() {return(32768);}
void redFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &redFadeCX, &redFadeC0, &redFadeC1); }



uint32_t gordon1CX() {return(32896);}
uint32_t gordon1C0() {return(32896);}
uint32_t gordon1C1() {return(8388736);}
uint32_t gordon1C2() {return(32768);}
uint32_t gordon1C3() {return(8388608);}
void gordon1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 1, &gordon1CX, &gordon1C0, &gordon1C1, &gordon1C2, &gordon1C3); }



uint32_t blackFadeCX() {return(32768);}
uint32_t blackFadeC0() {return(32768);}
uint32_t blackFadeC1() {return(0);}
void blackFade(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &blackFadeCX, &blackFadeC0, &blackFadeC1); }



uint32_t gordon2CX() {return(128);}
uint32_t gordon2C0() {return(128);}
uint32_t gordon2C1() {return(8421376);}
uint32_t gordon2C2() {return(128);}
uint32_t gordon2C3() {return(8421376);}
void gordon2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 1, &gordon2CX, &gordon2C0, &gordon2C1, &gordon2C2, &gordon2C3); }



uint32_t redRedCX() {return(8388608);}
uint32_t redRedC0() {return(8388608);}
uint32_t redRedC1() {return(128);}
void redRed(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &redRedCX, &redRedC0, &redRedC1); }



uint32_t gordon3CX() {return(8388608);}
uint32_t gordon3C0() {return(8388608);}
uint32_t gordon3C1() {return(8421504);}
uint32_t gordon3C2() {return(8388608);}
uint32_t gordon3C3() {return(128);}
void gordon3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 1, &gordon3CX, &gordon3C0, &gordon3C1, &gordon3C2, &gordon3C3); }



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
    wipe4(f, duration, strip, 1, &mardigrasCX, &mardigrasC0, &mardigrasC1, &mardigrasC2, &mardigrasC3); }


Adafruit_NeoPixel* pod1 = new Adafruit_NeoPixel(32, 13, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod2 = new Adafruit_NeoPixel(32, 12, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* pod3 = new Adafruit_NeoPixel(32, 9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod4 = new Adafruit_NeoPixel(32, 8, NEO_GRB + NEO_KHZ800);


void setupStrips() {
   APS_list->addStrip(pod1);
   APS_list->addStrip(pod2);
   APS_list->addStrip(pod3);
    APS_list->addStrip(pod4);




}

void sequential(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonUpdateFunction S0, eMoonUpdateFunction S1, eMoonUpdateFunction S2, eMoonUpdateFunction S3 ) {

    eMoonUpdateFunction update;
    switch ( f / (duration / 4) ) {
        case 0:
            update = S0;
            break;
        case 1:
            update = S1;
            break;
        case 2:
            update = S2;
            break;
        case 3:
            update = S3;
            break;
            
        default:
            break;
    }
    APL_list->addLightshow(-1, duration, strip, update);
}

void testmix1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {
    eMoonUpdateFunction update;
//    APL_list->addLightshow(0, duration/4, pod2, &gordon2);

    switch ( f / (duration / 4) ) {
        case 0:
            APL_list->addLightshow(0, duration/4, pod2, &gordon2);
            APL_list->addLightshow(-1, duration/2, pod1, &gordon1);
            APL_list->addLightshow(-1, duration/4, pod3, &gordon3);
            APL_list->addLightshow(-1, duration/4, pod4, &redFade);

            break;
        case 1:
            APL_list->addLightshow(0, duration/4, pod2, &redGreen);
//            APL_list->addLightshow(-1, duration/4, pod1, &redFade);
            APL_list->addLightshow(-1, duration/2, pod3, &mardigras);
            APL_list->addLightshow(-1, duration/4, pod4, &redGreen);


            break;
        case 2:
            APL_list->addLightshow(0, duration/4, pod2, &blackFade);
            APL_list->addLightshow(-1, duration/4, pod1, &mardigras);
            APL_list->addLightshow(-1, duration/2, pod4, &gordon2);


            break;
        case 3:
            APL_list->addLightshow(0, duration/4, pod2, &gordon3);
            APL_list->addLightshow(-1, duration/4, pod1, &greenBlue);
            APL_list->addLightshow(-1, duration/4, pod3, &gordon1);

            break;
//        case 5:
//            APL_list->addLightshow(0, duration/8, pod2, &redFade);
//            //            APL_list->addLightshow(-1, duration/4, pod1, &mardigras);
//            
//            break;
//        case 7:
//            APL_list->addLightshow(0, duration/8, pod2, &gordon1);
//            //            APL_list->addLightshow(-1, duration/4, pod1, &greenBlue);
//            break;
            
        default:
            break;
    }
    
//    sequential(f, duration, strip, &mardigras, &redFade, &gordon1, &gordon2);
}





void setupMasterLightshow() {
    
    mix_list->addLightshow(-1, 256, pod1, &testmix1);
//   master->addLightshow(64, pod1, &rainbowSpread);
//   master->addLightshow(128, pod2, &redFade);
//   master->addLightshow(64, pod1, &gordon1);
//   master->addLightshow(128, pod2, &blackFade);
//   master->addLightshow(64, pod1, &gordon2);
//   master->addLightshow(128, pod2, &redRed);
//   master->addLightshow(64, pod1, &gordon3);
//   master->addLightshow(128, pod2, &redGreen);
//   master->addLightshow(128, pod1, &backGreen);
//   master->addLightshow(128, pod2, &greenBlack);
//   master->addLightshow(128, pod1, &greenBlue);
//   master->addLightshow(64, pod2, &mardigras);
    
}





