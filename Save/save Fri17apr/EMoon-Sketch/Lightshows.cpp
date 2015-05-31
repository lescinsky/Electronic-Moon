//  Automatically Generated code  

#include "Lightshows.h"





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
    fade4(f, duration, strip, 1, &black000, &red1500, &green0150, &white151515, &blue0015); }



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


void edgewipe0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &lemon, &pink, &custard, &peacock); }

void edgewipe1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &peacock, &custard, &pink, &lemon); }

void edgewipe2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &peacock, &lemon, &pink, &custard); }



void edgewipe10(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &red0700, &magenta15015, &orange880, &red1500); }

void edgewipe11(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &black000, &purple8015, &green0150, &blueblack001, &cyan0077); }

void edgewipe12(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &magenta15015, &orange880, &red0700, &magenta0707); }


void edgewipe20(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &blue0007, &cyan01515, &blue0007, &cyan01515); }

void edgewipe21(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &white151515, &blue0007, &white151515, &cyan01515); }

void edgewipe22(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &cyan01515, &blue0007, &cyan01515, &blue0007); }



void edgewipe30(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &white151515, &black000, &white151515, &black000); }

void edgewipe31(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &cyan0077, &red0700, &purple8015, &blue0015); }

void edgewipe32(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &green0150, &yellow15150, &green0070, &red0700); }

//assortment of red yellow green purple

void a0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadsparklefill(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }

void a1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }

void a2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }


void a3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    unbloom4(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }


void a4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }


void a5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    curtain4(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }


void a6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &yellow15150, &purple8015, &orange880, &lime8150, &magenta15015); }


void a7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &testerCX, &testerC0, &testerC1, &testerC2, &testerC3); }

// cascading washes

void b0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadsparklefill(f, duration, strip, 0, &redblack100, &red0700, &darkred300, &crimson0703, &red1500); }

//    wash4(f, duration, strip, 0, &redblack100, &red0700, &darkred300, &crimson0703, &red1500); }

void b1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &redblack100, &red0700, &red1500, &crimson0703, &red0700); }

void b2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &orange880, &yellow15150, &red1500, &red0700); }


void b3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &orange880, &yellow15150, &red1500, &red0700); }


void b4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &yellow15150, &lime0370, &green0070, &lime0370); }


void b5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &yellow15150, &lime0370, &green0070, &lime0370); }


void b6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &cyan0077, &blue0007, &cobalt0037, &cyan01515); }


void b7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    curtain4(f, duration, strip, 0, &testerCX, &cyan0077, &purple8015, &cobalt0037, &red0700); }

//  bloom theme


void c0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &testerCX, &red0700, &purple8015, &magenta0707, &cyan0077); }
//    unbloom4(f, duration, strip, 0, &testerCX, &red0700, &purple8015, &magenta0707, &cyan0077); }

void c1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    bloom4(f, duration, strip, 0, &testerCX, &purple8015, &magenta0707, &cyan0077, &magenta0707); }

void c2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    curtain4(f, duration, strip, 0, &testerCX, &purple8015, &blue0007, &purple8015, &red0700); }


void c3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &white151515, &purple8015, &magenta0707, &blueblack001, &magenta0707); }


void c4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    unbloom4(f, duration, strip, 0, &testerCX, &purple8015, &magenta0707, &blueblack001, &magenta0707); }


void c5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &testerCX, &purple8015, &cobalt0815, &purple8015, &red0700); }


void c6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    curtain4(f, duration, strip, 0, &testerCX, &crimson0703, &magenta0707, &purple8015, &red0700); }


void c7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    bloom4(f, duration, strip, 0, &testerCX, &crimson0703, &magenta0707, &purple8015, &red0700); }

// sparkle theme

void d0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadsparklefill(f, duration, strip, 0, &testerCX, &yellow15150, &red0700, &purple8015, &magenta0707); }

void d1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &blueblack001, &orange880, &purple8015, &lime8150, &red1500); }

void d2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &redblack100, &purple8015, &red0700, &red0700, &orange880); }


void d3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &blueblack001, &testerC0, &testerC1, &testerC2, &testerC3); }


void d4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &redblack100, &purple8015, &yellow15150, &red0700, &yellow15150); }


void d5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadsparklefill(f, duration, strip, 0, &black000, &purple8015, &yellow15150, &red0700, &yellow15150); }


void d6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &blueblack001, &purple8015, &red0700, &red0700, &testerC3); }


void d7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadsparklefill(f, duration, strip, 0, &testerCX, &yellow15150, &red0700, &purple8015, &magenta0707); }



// red, yellow, blue wipes and misc

void e0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &black000, &purple8015, &yellow15150, &red0700, &yellow15150); }


void e1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &black000, &purple8015, &yellow15150, &red0700, &yellow15150); }

void e2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &black000, &crimson0703, &magenta0707, &purple8015, &red0700); }


void e3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &black000, &purple8015, &yellow15150, &red0700, &yellow15150); }

void e4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &black000, &purple8015, &yellow15150, &red0700, &yellow15150); }


void e5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &black000, &red0700, &yellow15150, &cyan01515, &yellow15150); }


void e6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    bloom4(f, duration, strip, 0, &black000, &purple8015, &yellow15150, &red0700, &yellow15150); }


void e7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &black000, &blue0015, &yellow15150, &red0700, &blue0015); }



// blue theme ---------------------------------------------

void f0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadsparklefill(f, duration, strip, 0, &blue0015, &blue0015, &blue0015, &blue0015, &blue0015); }

void f1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &blue0015, &black000, &blueblack001, &blue0015, &blueblack001); }

void f2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &blue0015, &blue0015, &blueblack001, &blue0015, &blueblack001); }


void f3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &blue0015, &blue0015, &blueblack001, &blue0015, &blueblack001); }


void f4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &blueblack001, &blue0015, &black000, &blue0015, &blueblack001); }


void f5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    curtain4(f, duration, strip, 0, &testerCX, &blue0007, &blueblack001, &blue0015, &blueblack001); }


void f6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    sparklefill4(f, duration, strip, 0, &blue0015, &blue0015, &blue0015, &blue0015, &blue0015); }


void f7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &black000, &black000, &blue0015, &black000, &blue0015); }


// shuffle theme ----------------------------------------


void g0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &yellow15150, &crimson1508, &orange880, &blue0015, &magenta15015); }

void g1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 0, &black000, &red1500, &green0150); }

void g2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadshuffle(f, duration, strip, 0, &testerCX, &red1500, &purple8015, &white151515, &green0150); }


void g3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadshuffle(f, duration, strip, 0, &testerCX, &red1500, &purple8015, &white151515, &green0150); }


void g4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadshuffle(f, duration, strip, 0, &testerCX, &red1500, &purple8015, &white151515, &green0150); }


void g5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    curtain4(f, duration, strip, 0, &testerCX, &red1500, &blue0015, &yellow15150, &green0150); }


void g6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 0, &black000, &green0150, &yellow15150); }


void g7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &testerCX, &white151515, &red1500, &green0150, &yellow15150); }

// yellow theme, spins and fades

void h0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &green0150, &orange880); }

void h1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadspin4(f, duration, strip, 0, &white151515, &orange880, &yellow15150, &orange880, &yellow15150); }

void h2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &yellow15150, &white151515, &green0150, &orange880, &yellow15150); }


void h3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &green0150, &orange880); }


void h4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &crimson0703, &yellow15150); }


void h5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadspin4(f, duration, strip, 0, &white151515, &orange880, &green0150, &yellow15150, &green0150); }


void h6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &yellow15150, &orange880, &green0150, &yellow15150, &orange880); }


void h7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &green0150, &yellow15150); }










