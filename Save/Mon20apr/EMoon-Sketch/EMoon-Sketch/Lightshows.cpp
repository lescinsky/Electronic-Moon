//  Automatically Generated code  

#include "Lightshows.h"


void wait(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
}


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
    fade2(f, duration, strip, 64, &redFadeCX, &redFadeC0, &redFadeC1, NULL, NULL); }



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
    fade2(f, duration, strip, 64, &blackFadeCX, &blackFadeC0, &blackFadeC1, NULL, NULL); }



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
    fade2(f, duration, strip, 64, &redRedCX, &redRedC0, &redRedC1, NULL, NULL); }



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
    fade2(f, duration, strip, 64, &redGreenCX, &redGreenC0, &redGreenC1, NULL, NULL); }



uint32_t backGreenCX() {return(0);}
uint32_t backGreenC0() {return(0);}
uint32_t backGreenC1() {return(32768);}
void backGreen(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &backGreenCX, &backGreenC0, &backGreenC1, NULL, NULL); }



uint32_t greenBlackCX() {return(32768);}
uint32_t greenBlackC0() {return(32768);}
uint32_t greenBlackC1() {return(0);}
void greenBlack(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &greenBlackCX, &greenBlackC0, &greenBlackC1, NULL, NULL); }



uint32_t greenBlueCX() {return(32768);}
uint32_t greenBlueC0() {return(32768);}
uint32_t greenBlueC1() {return(128);}
void greenBlue(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 64, &greenBlueCX, &greenBlueC0, &greenBlueC1, NULL, NULL); }



uint32_t mardigrasCX() {return(32832);}
uint32_t mardigrasC0() {return(32832);}
uint32_t mardigrasC1() {return(8404992);}
uint32_t mardigrasC2() {return(4194432);}
uint32_t mardigrasC3() {return(4227072);}
void mardigras (eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spread4(f, duration, strip, 1, &mardigrasCX, &mardigrasC0, &mardigrasC1, &mardigrasC2, &mardigrasC3); }


//-----------------

void auswipe0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade4(f, duration, strip, 0, &black000, &black000, &blueblack001, &blue0015, &blue0015); }

void auswipe1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }

void auswipe2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &blue0015, &yellow15150, &yellow15150, &yellow15150); }



void auswipe10(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }

void auswipe11(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }

void auswipe12(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }


void auswipe20(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }

void auswipe21(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }

void auswipe22(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &blue0015, &yellow15150, &yellow15150, &yellow15150, &yellow15150); }



void auswipe30(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &white151515, &black000, &white151515, &black000); }

void auswipe31(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &cyan0077, &red0700, &purple8015, &blue0015); }

void auswipe32(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    everwipe4(f, duration, strip, 0, &black000, &green0150, &yellow15150, &green0070, &red0700); }



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
    fade2(f, duration, strip, 0, &black000, &red1500, &green0150, NULL, NULL); }

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
    fade2(f, duration, strip, 0, &black000, &green0150, &yellow15150, NULL, NULL); }


void g7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wipe4(f, duration, strip, 0, &testerCX, &white151515, &red1500, &green0150, &yellow15150); }

// yellow theme, spins and fades

void h0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &green0150, &orange880, NULL, NULL); }

void h1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadspin4(f, duration, strip, 0, &white151515, &orange880, &yellow15150, &orange880, &yellow15150); }

void h2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &yellow15150, &white151515, &green0150, &orange880, &yellow15150); }


void h3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &green0150, &orange880, NULL, NULL); }


void h4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &crimson0703, &yellow15150, NULL, NULL); }


void h5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    quadspin4(f, duration, strip, 0, &white151515, &orange880, &green0150, &yellow15150, &green0150); }


void h6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    spin4(f, duration, strip, 0, &yellow15150, &orange880, &green0150, &yellow15150, &orange880); }


void h7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    fade2(f, duration, strip, 16, &black000, &green0150, &yellow15150, NULL, NULL); }



// aussie theme

void aus0(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &yellow15150, &lime0370, &green0150, &lime8150); }

void aus1(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &yellow15150, &lime0370, &green0150, &lime0370); }

void aus2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &yellow15150, &lime8150, &green0150, &lime8150); }



void aus3(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &yellow15150, &green0150, &green0150, &yellow15150); }


void aus4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &yellow15150, &lime0370, &green0150, &lime0370); }


void aus5(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &lime8150, &lime0370, &green0150, &lime8150); }


void aus6(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &yellow15150, &lime8150, &green0150, &lime8150); }


void aus7(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)
{
    wash4(f, duration, strip, 0, &green0150, &green0150, &lime0370, &green0150, &yellow15150); }







// Matthew and Tony's red square




void	my28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	black000	, &	blue0015	, &	yellow15150	, &	yellow15150	, &	yellow15150	);}

void	my30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	black000	, &	blue0015	, &	blue0015	, &	yellow15150	, &	yellow15150	);}

//--------------

void	wind0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	black000	, &	darkmagenta303	, &	magenta0707	, &	pink	, &	crimson1508	);}
void	windyellow0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	black000	, &	redblack100	, &	darkorange330	, &	darkmagenta303	, &	yellow15150	);}
void	windwhite0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	black000	, &	blueblack001	, &	darklime130	, &	peacock	, &	white151515	);}
void	windwhite1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	black000	, &	blueblack001	, &	darkgreen030	, &	darkblue003	, &	white151515	);}
void	windwhite2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	redblack100	, &	darkgreen030	, &	blueblack001	, &	purple8015	, &	white151515	);}
void	rise0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	blueblack001	, &	blueblack001	, &	darkorange330	, &	orange880	, &	custard	);}
void	rise1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	curtain4	(f, duration, strip, 	0	, &	blueblack001	, &	blueblack001	, &	darkorange330	, &	orange880	, &	custard	);}
void	rise2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	blueblack001	, &	blueblack001	, &	darkorange330	, &	orange880	, &	custard	);}

void	redrise0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	redrise1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	redrise2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	sparkrise0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	sparkrise1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	sparkrise2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	0	, &	redblack100	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	sparkrise28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	0	, &	red0700	, &	red0700	, &	red0700	, &	red1500	, &	red1500	);}
void	sparkrise29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	0	, &	red1500	, &	red1500	, &	red1500	, &	red0700	, &	red1500	);}
void	sparkrise30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	0	, &	red1500	, &	red1500	, &	red0700	, &	red1500	, &	red0700	);}


void	spiral0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	91	, &	orange880	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	92	, &	yellow15150	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	401	, &	magenta15015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	402	, &	green0070	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	403	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	404	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	97	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	98	, &	crimson0703	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	89	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	79	, &	custard	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	304	, &	lemon	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	303	, &	pink	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	302	, &	peacock	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	301	, &	aqua0158	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508		);}
void	spiral14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	29	, &	cobalt0037	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	19	, &	blue0015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}


// My first sqfill

void	spiral0_0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 91, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral0_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	92	, &	yellow15150	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral0_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	401	, &	green0070	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral0_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	402	, &	white151515	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	403	, &	blue0015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	404	, &	orange880	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	97	, &	peacock	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	98	, &	lime8150	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	89	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	79	, &	custard	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	304	, &	red0700	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	303	, &	magenta0707	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	302	, &	aqua0158	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	301	, &	green0070	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	29	, &	blue0015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral0_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	19	, &	crimson0703	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}


void	spiral1_0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	11	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral1_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	22	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral1_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	33	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral1_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	44	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	55	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	66	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	77	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	88	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	19	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	28	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	37	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	55	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	64	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	73	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	82	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral1_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	82	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_0	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	91	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	92	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	401	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	402	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	403	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	404	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	97	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	98	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	89	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	79	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	304	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	303	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	302	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	301	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	29	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	19	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	8	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_17	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	7	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_18	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	104	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_19	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	103	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_20	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	102	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_21	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	101	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_22	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	2	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_23	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	1	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_24	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	10	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_25	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	20	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_26	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	201	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_27	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	202	, &	cobalt0815	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	203	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	204	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	70	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_31	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	80	, &	cobalt0815	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_32	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	81	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_33	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	82	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_34	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	93	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_35	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	94	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_36	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	95	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_37	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	96	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_38	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	87	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_39	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	88	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_41	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	78	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_42	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	69	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_43	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	59	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_44	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	49	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_45	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	39	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_46	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	28	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_47	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	18	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_49	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	17	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_50	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	6	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_51	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	5	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_52	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	4	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_53	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	3	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_54	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	12	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_55	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	11	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_57	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	21	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_58	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	30	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_59	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	40	, &	emerald080	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_60	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	50	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_61	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	60	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_62	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	71	, &	emerald080	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_64	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	72	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_65	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	83	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_66	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	84	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_67	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	85	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_68	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	86	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_69	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	77	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_70	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	68	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_71	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	58	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_72	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	48	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_73	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	38	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_74	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	27	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_75	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	16	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_76	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	15	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_77	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	14	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_78	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	13	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_79	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	22	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_80	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	31	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_81	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	41	, &	purple8015	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_82	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	51	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_83	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	61	, &	purple8015	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_85	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	73	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_86	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	74	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_87	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	75	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_88	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	76	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_90	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	67	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_91	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	57	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_92	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	47	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_93	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	37	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_95	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	26	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_96	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	25	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_97	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	24	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_98	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	23	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}

void	spiral2_100	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	32	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_101	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	42	, &	blue0007	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_102	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	52	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_103	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	62	, &	blue0007	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_104	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	63	, &	darkcyan033	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_105	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	64	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_106	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	65	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_107	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	66	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_108	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	56	, &	darkcyan033	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_109	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	46	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_110	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	36	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_111	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	35	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_112	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	34	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_113	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	33	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_114	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	43	, &	darkcyan033	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_115	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	53	, &	darkcyan033	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_116	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	54	, &	darkgreen030	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_117	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	55	, &	darkgreen030	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}
void	spiral2_118	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	45	, &	darkgreen030	, &	redblack100	, &	red1500	, &	red0700	, &	red1500	);}
void	spiral2_119	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	44	, &	darkgreen030	, &	redblack100	, &	redblack100	, &	darkmagenta303	, &	crimson1508	);}


void	field0_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	1	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	2	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	3	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	4	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	5	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	6	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	7	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	8	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}

void	field0_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	10	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	11	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	12	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	13	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	14	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	15	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	16	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_17	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	17	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_18	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	18	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_19	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	19	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_20	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	20	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_21	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	21	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_22	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	22	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_23	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	23	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_24	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	24	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_25	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	25	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_26	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	26	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_27	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	27	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	28	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	29	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	30	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_31	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	31	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_32	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	32	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_33	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	33	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_34	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	34	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_35	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	35	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_36	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	36	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_37	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	37	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_38	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	38	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_39	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	39	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_40	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	40	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_41	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	41	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_42	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	42	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_43	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	43	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_44	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	44	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_45	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	45	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_46	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	46	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_47	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	47	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_48	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	48	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_49	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	49	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_50	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	50	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_51	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	51	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_52	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	52	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_53	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	53	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_54	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	54	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_55	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	55	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_56	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	56	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_57	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	57	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_58	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	58	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_59	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	59	, &	emerald080	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_60	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	60	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_61	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	61	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_62	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	62	, &	emerald080	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_64	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	63	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_65	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	64	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_66	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	65	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_67	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	66	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_68	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	67	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_69	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	68	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_70	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	69	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_71	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	70	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_72	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	71	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_73	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	72	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_74	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	73	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_75	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	74	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_76	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	75	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_77	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	76	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_78	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	77	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_79	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	78	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_80	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	79	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_81	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	80	, &	purple8015	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_82	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	81	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_83	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	82	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_84	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	83	, &	purple8015	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_85	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	84	, &	blue0007	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_86	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	85	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_87	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	86	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_88	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	87	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_89	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	88	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_90	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	89	, &	blue0007	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}

void	field0_92	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	91	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_93	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	92	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}

void	field0_95	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	94	, &	blue0007	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	field0_96	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	95	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_97	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	96	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_98	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	97	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}
void	field0_99	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	98	, &	blue0007	, &	blueblack001	, &	greenblack	, &	red0700	, &	red1500	);}

void	field0_101	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	101	, &	blue0007	, &	aqua0158	, &	cobalt0037	, &	darkmagenta303	, &	crimson1508	);}
void	field0_102	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	102	, &	blue0007	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_103	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	103	, &	blue0007	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_104	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	104	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	darkmagenta303	, &	crimson1508	);}
void	field0_105	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	201	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_106	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	202	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_107	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	203	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_108	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	204	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	darkmagenta303	, &	crimson1508	);}
void	field0_109	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	301	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_110	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	302	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_111	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	303	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_112	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	304	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_113	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	401	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_114	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	402	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	darkmagenta303	, &	crimson1508	);}
void	field0_115	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	403	, &	darkcyan033	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}
void	field0_116	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	404	, &	darkgreen030	, &	aqua0158	, &	cobalt0037	, &	red0700	, &	red1500	);}

void	flasher_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	1	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	flasher_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	2	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	flasher_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	3	, &	cobalt0815	, &	yellow15150	, &	red0700	, &	red0700	, &	red1500	);}
void	flasher_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	4	, &	cobalt0815	, &	peacock	, &	orange880	, &	red0700	, &	red1500	);}
void	flasher_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	5	, &	cobalt0815	, &	pink	, &	green0150	, &	red0700	, &	red1500	);}
void	flasher_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	6	, &	cobalt0815	, &	magenta0707	, &	blue0015	, &	red0700	, &	red1500	);}
void	flasher_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	7	, &	cobalt0815	, &	green0070	, &	white151515	, &	red0700	, &	red1500	);}
void	flasher_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	purple8015	, &	blue0015	, &	red0700	, &	red1500	);}
void	flasher_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	orange880	, &	darkmagenta303	, &	red0700	, &	red1500	);}
void	flasher_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	green0150	, &	yellow15150	, &	red0700	, &	red1500	);}
void	flasher_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	blue0015	, &	peacock	, &	red0700	, &	red1500	);}
void	flasher_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	blue0015	, &	red0700	, &	red0700	, &	red1500	);}
void	flasher_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	white151515	, &	greenblack	, &	red0700	, &	red1500	);}
void	flasher_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	8	, &	cobalt0815	, &	blue0015	, &	yellow15150	, &	red0700	, &	red1500	);}


void	tetfall0_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	1	, &	cobalt0815	, &	Tfield0	, &	Tfield1	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall	(f, duration, strip, 	2	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	0	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	4	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	5	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	2	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	0	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	5	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall	(f, duration, strip, 	3	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	2	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	1	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	4	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	0	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall0_16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	darkmagenta303	, &	crimson1508	, &	darkmagenta303	, &	crimson1508	);}


void	tetfall1_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	1	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	tetfall1_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall90	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_17	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_18	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_19	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_20	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall90	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_21	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_22	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_23	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall180	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_24	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_25	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall270	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_26	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_27	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall90	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_31	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_32	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_33	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_34	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_35	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_36	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_37	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_38	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_39	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_40	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_41	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_42	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_43	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_44	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_45	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_46	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_47	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_48	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_49	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_50	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_51	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_52	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_53	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_54	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_55	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_56	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_57	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_58	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_59	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_60	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_61	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_62	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_63	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	tetfall1_64	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}


void	messfall1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	1	, &	cobalt0815	, &	blueblack001	, &	greenblack	, &	darkmagenta303	, &	crimson1508	);}
void	messfall2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall90	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	4	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall17	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall18	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	4	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall19	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall20	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall90	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall21	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall22	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall23	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall180	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall24	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall25	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall270	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall26	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall27	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall90	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall31	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall32	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall33	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall34	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall180	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall35	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall36	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall37	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall38	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall39	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall90	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall40	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall41	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall42	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	1	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall43	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall44	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall45	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall46	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	4	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall47	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall48	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall49	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall50	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	1	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall51	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall52	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall53	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall180	(f, duration, strip, 	1	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall54	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall270	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall55	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	4	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall56	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall57	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall58	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall59	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall60	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall61	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall62	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall63	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}
void	messfall64	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	);}

void	munge1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	1	, &	cobalt0815	, &	blueblack001	, &	greenblack, NULL, NULL);}
void	munge2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	darkmagenta303	, &	blueblack001	);}
void	munge3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	0	, &	cobalt0815	, &	blueblack001	, &	cobalt0815	, &	magenta0707	, &	cobalt0815	);}
void	munge4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	curtain4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	magenta15015	, &	blueblack001	);}
void	munge5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	pink	, &	cobalt0815	);}
void	munge6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	peacock	, &	cobalt0815	, &	blueblack001	, &	crimson0703	, &	blueblack001	);}
void	munge7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fillsq	(f, duration, strip, 	0	, &	blue0007	, &	cobalt0815	, &	cobalt0815	, &	crimson1508	, &	blueblack001	);}
void	munge8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	5	, &	blue0015	, &	blueblack001	, &	cobalt0815	, &	darkcrimson301	, &	cobalt0815	);}
void	munge9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall180	(f, duration, strip, 	6	, &	blueblack001	, &	cobalt0815	, &	blueblack001	, &	darkred300	, &	blueblack001	);}
void	munge10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	6	, &	cobalt0037	, &	cobalt0815	, &	cobalt0815	, &	red0700	, &	cobalt0815	);}
void	munge11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall90	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	red1500	, &	blueblack001	);}
void	munge12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	6	, &	darkblue003	, &	blueblack001	, &	black000	, &	redblack100	, &	cobalt0815	);}
void	munge13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	4	, &	purple8015	, &	cobalt0815	, &	darkmagenta303	, &	custard	, &	cobalt0815	);}
void	munge14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	white151515	, &	cobalt0815	, &	magenta0707	, &	darkorange330	, &	blueblack001	);}
void	munge15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	0	, &	peacock	, &	blueblack001	, &	magenta15015	, &	orange880	, &	cobalt0815	);}
void	munge16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	pink	, &	lemon	, &	cobalt0815	);}
void	munge17	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	6	, &	cobalt0815	, &	blueblack001	, &	crimson0703	, &	lime0370	, &	cobalt0815	);}
void	munge18	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	4	, &	cobalt0815	, &	cobalt0815	, &	crimson1508	, &	lime8150	, &	cobalt0815	);}
void	munge19	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	6	, &	cobalt0815	, &	cobalt0815	, &	darkcrimson301	, &	yellow15150	, &	black000	);}
void	munge20	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	darkred300	, &	darkgreen030	, &	darkmagenta303	);}
void	munge21	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadshuffle	(f, duration, strip, 	0	, &	peacock	, &	cobalt0815	, &	red0700	, &	darklime130	, &	magenta0707	);}
void	munge22	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	5	, &	blue0007	, &	cobalt0815	, &	red1500	, &	emerald080	, &	magenta15015	);}
void	munge23	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	blue0015	, &	blueblack001	, &	redblack100	, &	green0070	, &	pink	);}
void	munge24	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	5	, &	blueblack001	, &	cobalt0815	, &	custard	, &	green0150	, &	crimson0703	);}
void	munge25	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	2	, &	cobalt0037	, &	cobalt0815	, &	darkorange330	, &	cyan0077	, &	crimson1508	);}
void	munge26	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	orange880	, &	blueblack001	, &	darkcrimson301	);}
void	munge27	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklequad	(f, duration, strip, 	0	, &	darkblue003	, &	black000	, &	lemon	, &	darkcyan033	, &	darkred300	);}
void	munge28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	5	, &	purple8015	, &	darkmagenta303	, &	blueblack001	, &	peacock	, &	red0700	);}
void	munge29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	6	, &	white151515	, &	magenta0707	, &	lime8150	, &	blue0007	, &	red1500	);}
void	munge30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq4	(f, duration, strip, 	5	, &	peacock	, &	magenta15015	, &	yellow15150	, &	blue0015	, &	redblack100	);}
void	munge31	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	3	, &	cobalt0815	, &	pink	, &	darkgreen030	, &	blueblack001	, &	custard	);}
void	munge32	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	cobalt0815	, &	crimson0703	, &	darklime130	, &	cobalt0037	, &	darkorange330	);}
void	munge33	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	0	, &	cobalt0815	, &	crimson1508	, &	emerald080	, &	cobalt0815	, &	orange880	);}
void	munge34	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	6	, &	cobalt0815	, &	darkcrimson301	, &	green0070	, &	darkblue003	, &	lemon	);}
void	munge35	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	5	, &	cobalt0815	, &	darkred300	, &	green0150	, &	purple8015	, &	lime0370	);}
void	munge36	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	red0700	, &	cyan0077	, &	white151515	, &	lime8150	);}
void	munge37	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	cobalt0815	, &	red1500	, &	cyan01515	, &	peacock	, &	yellow15150	);}
void	munge38	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	peacock	, &	redblack100	, &	darkcyan033	, &	black000	, &	darkgreen030	);}
void	munge39	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	6	, &	blue0007	, &	custard	, &	peacock	, &	darkmagenta303	, &	darklime130	);}
void	munge40	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	2	, &	blue0015	, &	darkorange330	, &	blue0007	, &	magenta0707	, &	emerald080	);}
void	munge41	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	5	, &	blueblack001	, &	orange880	, &	blue0015	, &	magenta15015	, &	green0070	);}
void	munge42	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	1	, &	cobalt0037	, &	lemon	, &	blueblack001	, &	pink	, &	green0150	);}
void	munge43	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall90	(f, duration, strip, 	3	, &	cobalt0815	, &	blueblack001	, &	cobalt0037	, &	crimson0703	, &	cyan0077	);}
void	munge44	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall	(f, duration, strip, 	0	, &	darkblue003	, &	lime8150	, &	cobalt0815	, &	blueblack001	, &	cyan01515	);}
void	munge45	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	3	, &	purple8015	, &	yellow15150	, &	darkblue003	, &	darkcrimson301	, &	darkcyan033	);}
void	munge46	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	4	, &	white151515	, &	darkgreen030	, &	purple8015	, &	darkred300	, &	peacock	);}
void	munge47	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	peacock	, &	darklime130	, &	white151515	, &	red0700	, &	blue0007	);}
void	munge48	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	3	, &	cobalt0815	, &	emerald080	, &	peacock	, &	red1500	, &	blue0015	);}
void	munge49	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	2	, &	cobalt0815	, &	green0070	, &	cobalt0815	, &	redblack100	, &	blueblack001	);}
void	munge50	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall	(f, duration, strip, 	1	, &	cobalt0815	, &	green0150	, &	cobalt0815	, &	custard	, &	cobalt0037	);}
void	munge51	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	2	, &	cobalt0815	, &	cyan0077	, &	peacock	, &	darkorange330	, &	cobalt0815	);}
void	munge52	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	3	, &	cobalt0815	, &	cyan01515	, &	blue0007	, &	orange880	, &	darkblue003	);}
void	munge53	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ifall180	(f, duration, strip, 	1	, &	cobalt0815	, &	darkcyan033	, &	blue0015	, &	lemon	, &	purple8015	);}
void	munge54	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Lfall270	(f, duration, strip, 	0	, &	cobalt0815	, &	peacock	, &	blueblack001	, &	lime0370	, &	white151515	);}
void	munge55	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	4	, &	cobalt0815	, &	blue0007	, &	cobalt0037	, &	lime8150	, &	peacock	);}
void	munge56	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	3	, &	cobalt0815	, &	blue0015	, &	cobalt0815	, &	yellow15150	, &	cobalt0815	);}
void	munge57	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	blueblack001	, &	darkblue003	, &	darkgreen030	, &	cobalt0815	);}
void	munge58	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	2	, &	cobalt0815	, &	cobalt0037	, &	purple8015	, &	darklime130	, &	cobalt0815	);}
void	munge59	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	white151515	, &	emerald080	, &	cobalt0815	);}
void	munge60	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall180	(f, duration, strip, 	0	, &	cobalt0815	, &	darkblue003	, &	peacock	, &	green0070	, &	cobalt0815	);}
void	munge61	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Zfall	(f, duration, strip, 	5	, &	cobalt0815	, &	purple8015	, &	cobalt0815	, &	green0150	, &	cobalt0815	);}
void	munge62	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Jfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	white151515	, &	cobalt0815	, &	cyan0077	, &	cobalt0815	);}
void	munge63	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	clearfield	(f, duration, strip, 	5	, &	cobalt0815	, &	peacock	, &	cobalt0815	, &	cyan01515	, &	cobalt0815	);}
void	munge64	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	darkcyan033	, &	cobalt0815	);}


void	munge1_1	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	1	, &	crimson1508	, &	lime8150	, &	greenblack	, &	black000	, &	crimson1508	);}
void	munge1_2	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	5	, &	darkcrimson301	, &	yellow15150	, &	cobalt0815	, &	darkmagenta303	, &	blueblack001	);}
void	munge1_3	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	darkred300	, &	darkgreen030	, &	darkorange330	, &	magenta0707	, &	darkorange330	);}
void	munge1_4	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	curtain4	(f, duration, strip, 	5	, &	darkorange330	, &	cobalt0815	, &	cobalt0815	, &	magenta15015	, &	blueblack001	);}
void	munge1_5	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	darkorange330	, &	pink	, &	cobalt0815	);}
void	munge1_6	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	peacock	, &	darkorange330	, &	blueblack001	, &	black000	, &	redblack100	);}
void	munge1_7	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	blue0007	, &	cobalt0815	, &	cobalt0815	, &	darkmagenta303	, &	custard	);}
void	munge1_8	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	5	, &	blueblack001	, &	crimson0703	, &	cobalt0815	, &	magenta0707	, &	darkorange330	);}
void	munge1_9	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	magenta15015	, &	crimson1508	, &	blueblack001	, &	magenta15015	, &	orange880	);}
void	munge1_10	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	6	, &	green0150	, &	darkcrimson301	, &	cobalt0815	, &	pink	, &	lemon	);}
void	munge1_11	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	cyan0077	, &	darkred300	, &	cobalt0815	, &	crimson0703	, &	lime0370	);}
void	munge1_12	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	cyan0077	, &	red0700	, &	black000	, &	crimson1508	, &	lime8150	);}
void	munge1_13	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	4	, &	purple8015	, &	darkorange330	, &	darkmagenta303	, &	custard	, &	darkorange330	);}
void	munge1_14	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	white151515	, &	cobalt0815	, &	magenta0707	, &	darkorange330	, &	blueblack001	);}
void	munge1_15	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	peacock	, &	blueblack001	, &	magenta15015	, &	orange880	, &	darkorange330	);}
void	munge1_16	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	3	, &	lime0370	, &	darkorange330	, &	pink	, &	lemon	, &	darkorange330	);}
void	munge1_17	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	6	, &	darkorange330	, &	blueblack001	, &	crimson0703	, &	lime0370	, &	lime0370	);}
void	munge1_18	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	4	, &	peacock	, &	magenta15015	, &	crimson1508	, &	lime8150	, &	darkorange330	);}
void	munge1_19	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	6	, &	darkred300	, &	green0150	, &	darkcrimson301	, &	yellow15150	, &	black000	);}
void	munge1_20	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Ofall	(f, duration, strip, 	5	, &	red0700	, &	cyan0077	, &	darkred300	, &	darkgreen030	, &	darkmagenta303	);}
void	munge1_21	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadshuffle	(f, duration, strip, 	0	, &	darkorange330	, &	cyan0077	, &	red0700	, &	darklime130	, &	magenta0707	);}
void	munge1_22	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	5	, &	orange880	, &	blueblack001	, &	red1500	, &	emerald080	, &	magenta15015	);}
void	munge1_23	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	lemon	, &	darkcyan033	, &	redblack100	, &	green0070	, &	pink	);}
void	munge1_24	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	5	, &	blueblack001	, &	peacock	, &	custard	, &	green0150	, &	crimson0703	);}
void	munge1_25	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	2	, &	lime8150	, &	blue0007	, &	darkorange330	, &	cyan0077	, &	crimson1508	);}
void	munge1_26	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	5	, &	cobalt0815	, &	darkorange330	, &	orange880	, &	blueblack001	, &	darkcrimson301	);}
void	munge1_27	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklequad	(f, duration, strip, 	0	, &	darkblue003	, &	black000	, &	lemon	, &	darkcyan033	, &	darkred300	);}
void	munge1_28	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	5	, &	purple8015	, &	darkmagenta303	, &	blueblack001	, &	peacock	, &	red0700	);}
void	munge1_29	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq	(f, duration, strip, 	6	, &	white151515	, &	magenta0707	, &	lime8150	, &	blue0007	, &	red1500	);}
void	munge1_30	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklesq4	(f, duration, strip, 	5	, &	peacock	, &	magenta15015	, &	yellow15150	, &	blue0015	, &	redblack100	);}
void	munge1_31	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	3	, &	darkred300	, &	green0150	, &	darkgreen030	, &	blueblack001	, &	custard	);}
void	munge1_32	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	red0700	, &	cyan0077	, &	darklime130	, &	cobalt0037	, &	darkorange330	);}
void	munge1_33	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	red1500	, &	cyan01515	, &	emerald080	, &	cobalt0815	, &	orange880	);}
void	munge1_34	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	redblack100	, &	darkcyan033	, &	green0070	, &	darkblue003	, &	lemon	);}
void	munge1_35	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	5	, &	blueblack001	, &	pink	, &	green0150	, &	purple8015	, &	lime0370	);}
void	munge1_36	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	cobalt0037	, &	crimson0703	, &	darklime130	, &	darklime130	, &	lime8150	);}
void	munge1_37	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	cobalt0815	, &	blueblack001	, &	cyan01515	, &	peacock	, &	yellow15150	);}
void	munge1_38	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	darkblue003	, &	darkcrimson301	, &	darkcyan033	, &	black000	, &	darkgreen030	);}
void	munge1_39	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	6	, &	purple8015	, &	darkred300	, &	darklime130	, &	darkmagenta303	, &	darklime130	);}
void	munge1_40	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	blue0015	, &	darklime130	, &	blue0007	, &	magenta0707	, &	emerald080	);}
void	munge1_41	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	5	, &	darklime130	, &	orange880	, &	blue0015	, &	magenta15015	, &	darklime130	);}
void	munge1_42	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	1	, &	cobalt0037	, &	lemon	, &	blueblack001	, &	pink	, &	green0150	);}
void	munge1_43	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	3	, &	cobalt0815	, &	blueblack001	, &	cobalt0037	, &	crimson0703	, &	cyan0077	);}
void	munge1_44	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	0	, &	darkblue003	, &	darklime130	, &	cobalt0815	, &	blueblack001	, &	cyan01515	);}
void	munge1_45	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	3	, &	purple8015	, &	darklime130	, &	darkblue003	, &	darkcrimson301	, &	darkcyan033	);}
void	munge1_46	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	4	, &	white151515	, &	darkgreen030	, &	purple8015	, &	darkred300	, &	peacock	);}
void	munge1_47	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	5	, &	peacock	, &	darklime130	, &	white151515	, &	darklime130	, &	blue0007	);}
void	munge1_48	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	3	, &	red1500	, &	blue0015	, &	peacock	, &	red1500	, &	blue0015	);}
void	munge1_49	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	2	, &	redblack100	, &	blueblack001	, &	darklime130	, &	redblack100	, &	blueblack001	);}
void	munge1_50	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	1	, &	custard	, &	cobalt0037	, &	purple8015	, &	custard	, &	cobalt0037	);}
void	munge1_51	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	2	, &	cobalt0815	, &	cyan0077	, &	darklime130	, &	darkorange330	, &	cobalt0815	);}
void	munge1_52	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	3	, &	cobalt0815	, &	cyan01515	, &	blue0007	, &	orange880	, &	darkblue003	);}
void	munge1_53	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	1	, &	darklime130	, &	darklime130	, &	blue0015	, &	lemon	, &	purple8015	);}
void	munge1_54	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	cobalt0815	, &	peacock	, &	blueblack001	, &	lime0370	, &	white151515	);}
void	munge1_55	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	4	, &	purple8015	, &	blue0007	, &	darklime130	, &	lime8150	, &	peacock	);}
void	munge1_56	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	3	, &	cobalt0815	, &	blue0015	, &	cobalt0815	, &	yellow15150	, &	purple8015	);}
void	munge1_57	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	5	, &	cobalt0815	, &	blueblack001	, &	darkblue003	, &	darkgreen030	, &	darklime130	);}
void	munge1_58	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	purple8015	, &	cobalt0037	, &	purple8015	, &	darklime130	, &	custard	);}
void	munge1_59	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	white151515	, &	emerald080	, &	purple8015	);}
void	munge1_60	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	darklime130	, &	darkblue003	, &	peacock	, &	green0070	, &	darkblue003	);}
void	munge1_61	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	5	, &	darkblue003	, &	purple8015	, &	custard	, &	green0150	, &	darkblue003	);}
void	munge1_62	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	darkblue003	, &	white151515	, &	greenblack	, &	cyan0077	, &	darkblue003	);}
void	munge1_63	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	5	, &	darkblue003	, &	peacock	, &	custard	, &	cyan01515	, &	darkblue003	);}
void	munge1_64	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	0	, &	darkblue003	, &	darkorange330	, &	greenblack	, &	darkcyan033	, &	darkblue003	);}
void	munge1_65	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	1	, &	darkblue003	, &	blueblack001	, &	greenblack	, &	black000	, &	darkmagenta303	);}
void	munge1_66	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	5	, &	darkblue003	, &	emerald080	, &	purple8015	, &	darkmagenta303	, &	blueblack001	);}
void	munge1_67	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	0	, &	darkblue003	, &	green0070	, &	darkblue003	, &	magenta0707	, &	darkorange330	);}
void	munge1_68	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	5	, &	darkblue003	, &	green0150	, &	darkblue003	, &	magenta15015	, &	blueblack001	);}
void	munge1_69	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	darkblue003	, &	cyan0077	, &	darkblue003	, &	pink	, &	darkorange330	);}
void	munge1_70	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	peacock	, &	greenblack	, &	blueblack001	, &	crimson0703	, &	blueblack001	);}
void	munge1_71	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	0	, &	blue0007	, &	blueblack001	, &	magenta15015	, &	crimson1508	, &	blueblack001	);}
void	munge1_72	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	5	, &	blue0015	, &	blueblack001	, &	peacock	, &	darkcrimson301	, &	cobalt0815	);}
void	munge1_73	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	6	, &	blueblack001	, &	lime8150	, &	blue0007	, &	darkred300	, &	blueblack001	);}
void	munge1_74	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	6	, &	cobalt0037	, &	blueblack001	, &	magenta15015	, &	red0700	, &	darkorange330	);}
void	munge1_75	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	0	, &	cobalt0815	, &	blueblack001	, &	peacock	, &	red1500	, &	blueblack001	);}
void	munge1_76	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	6	, &	darkblue003	, &	lime8150	, &	blue0007	, &	redblack100	, &	custard	);}
void	munge1_77	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	4	, &	purple8015	, &	darkmagenta303	, &	darkmagenta303	, &	custard	, &	cobalt0815	);}
void	munge1_78	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	2	, &	white151515	, &	darkmagenta303	, &	magenta0707	, &	darkorange330	, &	blueblack001	);}
void	munge1_79	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	peacock	, &	blueblack001	, &	magenta15015	, &	orange880	, &	darkorange330	);}
void	munge1_80	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	3	, &	darkmagenta303	, &	blueblack001	, &	peacock	, &	lemon	, &	darkorange330	);}
void	munge1_81	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	6	, &	darkred300	, &	lime8150	, &	blue0007	, &	lime0370	, &	darkorange330	);}
void	munge1_82	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	4	, &	magenta15015	, &	yellow15150	, &	blue0015	, &	lime8150	, &	cobalt0815	);}
void	munge1_83	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	6	, &	pink	, &	darkred300	, &	blueblack001	, &	yellow15150	, &	black000	);}
void	munge1_84	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	5	, &	crimson0703	, &	darklime130	, &	cobalt0037	, &	darkgreen030	, &	darkmagenta303	);}
void	munge1_85	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadshuffle	(f, duration, strip, 	0	, &	peacock	, &	darkmagenta303	, &	blueblack001	, &	peacock	, &	magenta0707	);}
void	munge1_86	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	5	, &	blue0007	, &	darkred300	, &	lime8150	, &	blue0007	, &	magenta15015	);}
void	munge1_87	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	blue0015	, &	magenta15015	, &	yellow15150	, &	blue0015	, &	pink	);}
void	munge1_88	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	5	, &	blueblack001	, &	pink	, &	darkred300	, &	blueblack001	, &	crimson0703	);}
void	munge1_89	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	cobalt0037	, &	crimson0703	, &	darklime130	, &	cobalt0037	, &	crimson1508	);}
void	munge1_90	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	5	, &	cobalt0815	, &	darkred300	, &	orange880	, &	blueblack001	, &	darkcrimson301	);}
void	munge1_91	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklequad	(f, duration, strip, 	0	, &	darkblue003	, &	black000	, &	lemon	, &	darkcyan033	, &	darkred300	);}
void	munge1_92	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	5	, &	purple8015	, &	darkmagenta303	, &	blueblack001	, &	peacock	, &	red0700	);}
void	munge1_93	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	6	, &	white151515	, &	darkred300	, &	lime8150	, &	blue0007	, &	red1500	);}
void	munge1_94	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	5	, &	peacock	, &	magenta15015	, &	yellow15150	, &	blue0015	, &	redblack100	);}
void	munge1_95	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	3	, &	cobalt0815	, &	pink	, &	darkred300	, &	blueblack001	, &	custard	);}
void	munge1_96	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	darkred300	, &	crimson0703	, &	darklime130	, &	cobalt0037	, &	darkorange330	);}
void	munge1_97	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	cobalt0815	, &	crimson1508	, &	emerald080	, &	cobalt0815	, &	orange880	);}
void	munge1_98	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	6	, &	custard	, &	darkcrimson301	, &	green0070	, &	darkblue003	, &	lemon	);}
void	munge1_99	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	5	, &	darkorange330	, &	darkred300	, &	darkred300	, &	purple8015	, &	lime0370	);}
void	munge1_100	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	darkred300	, &	red0700	, &	cyan0077	, &	darkblue003	, &	lime8150	);}
void	munge1_101	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	cobalt0815	, &	darkred300	, &	red0700	, &	cyan0077	, &	yellow15150	);}
void	munge1_102	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	peacock	, &	redblack100	, &	darkcyan033	, &	black000	, &	darkgreen030	);}
void	munge1_103	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	6	, &	blue0007	, &	custard	, &	peacock	, &	darkmagenta303	, &	darklime130	);}
void	munge1_104	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	2	, &	blue0015	, &	darkred300	, &	blue0007	, &	magenta0707	, &	emerald080	);}
void	munge1_105	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	5	, &	blueblack001	, &	darkred300	, &	blue0015	, &	magenta15015	, &	green0070	);}
void	munge1_106	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	1	, &	cobalt0037	, &	lemon	, &	blueblack001	, &	pink	, &	green0150	);}
void	munge1_107	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	3	, &	cobalt0815	, &	blueblack001	, &	cobalt0037	, &	darkred300	, &	cyan0077	);}
void	munge1_108	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	darkblue003	, &	darkorange330	, &	darkred300	, &	blueblack001	, &	cyan01515	);}
void	munge1_109	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	3	, &	purple8015	, &	darkred300	, &	darkblue003	, &	darkcrimson301	, &	darkred300	);}
void	munge1_110	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	4	, &	white151515	, &	darkgreen030	, &	purple8015	, &	darkorange330	, &	peacock	);}
void	munge1_111	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	peacock	, &	darklime130	, &	darkorange330	, &	red0700	, &	blue0007	);}
void	munge1_112	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	3	, &	darkorange330	, &	emerald080	, &	peacock	, &	red1500	, &	blue0015	);}
void	munge1_113	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	2	, &	cobalt0815	, &	green0070	, &	darkblue003	, &	redblack100	, &	blueblack001	);}
void	munge1_114	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	1	, &	cobalt0815	, &	green0150	, &	darkblue003	, &	custard	, &	cobalt0037	);}
void	munge1_115	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	darkorange330	, &	cyan0077	, &	peacock	, &	darkorange330	, &	cobalt0815	);}
void	munge1_116	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	3	, &	cobalt0815	, &	cyan01515	, &	blue0007	, &	orange880	, &	darkred300	);}
void	munge1_117	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	1	, &	darkred300	, &	darkcyan033	, &	blue0015	, &	darkred300	, &	purple8015	);}
void	munge1_118	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	0	, &	cobalt0815	, &	peacock	, &	blueblack001	, &	lime0370	, &	white151515	);}
void	munge1_119	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	4	, &	cobalt0815	, &	blue0007	, &	cobalt0037	, &	lime8150	, &	peacock	);}
void	munge1_120	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	3	, &	darkred300	, &	blue0015	, &	darkred300	, &	yellow15150	, &	darkred300	);}
void	munge1_121	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	5	, &	cobalt0815	, &	blueblack001	, &	darkblue003	, &	darkgreen030	, &	cobalt0815	);}
void	munge1_122	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	2	, &	darkred300	, &	cobalt0037	, &	purple8015	, &	darklime130	, &	cobalt0815	);}
void	munge1_123	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	darkmagenta303	, &	emerald080	, &	darkred300	);}
void	munge1_124	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	0	, &	cobalt0815	, &	darkblue003	, &	peacock	, &	green0070	, &	cobalt0815	);}
void	munge1_125	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	curtain4	(f, duration, strip, 	5	, &	darkred300	, &	purple8015	, &	cobalt0815	, &	green0150	, &	darkmagenta303	);}
void	munge1_126	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	cobalt0815	, &	white151515	, &	darkmagenta303	, &	cyan0077	, &	cobalt0815	);}
void	munge1_127	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	5	, &	cobalt0815	, &	peacock	, &	cobalt0815	, &	cyan01515	, &	darkmagenta303	);}
void	munge1_128	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	darkmagenta303	, &	darkcyan033	, &	cobalt0815	);}
void	munge1_129	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade2	(f, duration, strip, 	1	, &	darkorange330	, &	blueblack001	, &	greenblack	, &	black000	, &	darkmagenta303	);}
void	munge1_130	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	bloom4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	darkmagenta303	, &	blueblack001	);}
void	munge1_131	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	curtain4	(f, duration, strip, 	0	, &	darkgreen030	, &	blueblack001	, &	darkgreen030	, &	magenta0707	, &	darkgreen030	);}
void	munge1_132	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	curtain4	(f, duration, strip, 	5	, &	cobalt0815	, &	cobalt0815	, &	darkorange330	, &	magenta15015	, &	blueblack001	);}
void	munge1_133	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	pink	, &	cobalt0815	);}
void	munge1_134	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	peacock	, &	darkorange330	, &	blueblack001	, &	crimson0703	, &	blueblack001	);}
void	munge1_135	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	0	, &	blue0007	, &	cobalt0815	, &	cobalt0815	, &	crimson1508	, &	blueblack001	);}
void	munge1_136	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	5	, &	blue0015	, &	blueblack001	, &	cobalt0815	, &	darkcrimson301	, &	cobalt0815	);}
void	munge1_137	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	6	, &	blueblack001	, &	cobalt0815	, &	blueblack001	, &	darkred300	, &	blueblack001	);}
void	munge1_138	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	cobalt0037	, &	cobalt0815	, &	cobalt0815	, &	red0700	, &	cobalt0815	);}
void	munge1_139	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	red1500	, &	blueblack001	);}
void	munge1_140	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	fade4	(f, duration, strip, 	6	, &	darkblue003	, &	blueblack001	, &	black000	, &	redblack100	, &	cobalt0815	);}
void	munge1_141	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	4	, &	purple8015	, &	cobalt0815	, &	darkmagenta303	, &	custard	, &	cobalt0815	);}
void	munge1_142	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	white151515	, &	cobalt0815	, &	magenta0707	, &	darkorange330	, &	blueblack001	);}
void	munge1_143	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	0	, &	peacock	, &	blueblack001	, &	magenta15015	, &	orange880	, &	cobalt0815	);}
void	munge1_144	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	3	, &	cobalt0815	, &	cobalt0815	, &	pink	, &	lemon	, &	cobalt0815	);}
void	munge1_145	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	6	, &	cobalt0815	, &	blueblack001	, &	crimson0703	, &	lime0370	, &	darkorange330	);}
void	munge1_146	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	8	, &	blueblack001	, &	darkorange330	, &	crimson1508	, &	lime8150	, &	greenblack	);}
void	munge1_147	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	8	, &	blueblack001	, &	cobalt0815	, &	darkcrimson301	, &	blueblack001	, &	black000	);}
void	munge1_148	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	5	, &	cobalt0815	, &	blueblack001	, &	darkred300	, &	darkgreen030	, &	darkmagenta303	);}
void	munge1_149	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadshuffle	(f, duration, strip, 	0	, &	darkorange330	, &	greenblack	, &	greenblack	, &	blueblack001	, &	magenta0707	);}
void	munge1_150	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadsparklefill	(f, duration, strip, 	5	, &	blue0007	, &	blueblack001	, &	red1500	, &	emerald080	, &	magenta15015	);}
void	munge1_151	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	quadspin4	(f, duration, strip, 	2	, &	blue0015	, &	magenta15015	, &	green0070	, &	darkorange330	, &	blueblack001	);}
void	munge1_152	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall	(f, duration, strip, 	5	, &	blueblack001	, &	pink	, &	green0150	, &	green0150	, &	crimson0703	);}
void	munge1_153	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Sfall90	(f, duration, strip, 	2	, &	cobalt0037	, &	cobalt0037	, &	yellow15150	, &	cyan0077	, &	blueblack001	);}
void	munge1_154	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	sparklefill4	(f, duration, strip, 	5	, &	cobalt0815	, &	white151515	, &	darkgreen030	, &	greenblack	, &	darkcrimson301	);}
void	munge1_155	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	specklequad	(f, duration, strip, 	0	, &	blue0015	, &	peacock	, &	orange880	, &	blueblack001	, &	darkred300	);}
void	munge1_156	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	5	, &	purple8015	, &	yellow15150	, &	greenblack	, &	peacock	, &	red0700	);}
void	munge1_157	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	6	, &	white151515	, &	darkgreen030	, &	darkmagenta303	, &	blue0007	, &	red1500	);}
void	munge1_158	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	5	, &	peacock	, &	magenta15015	, &	yellow15150	, &	blueblack001	, &	blueblack001	);}
void	munge1_159	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spin4	(f, duration, strip, 	3	, &	cobalt0815	, &	pink	, &	darkgreen030	, &	cobalt0037	, &	yellow15150	);}
void	munge1_160	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	8	, &	cobalt0815	, &	crimson0703	, &	darklime130	, &	white151515	, &	darkgreen030	);}
void	munge1_161	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	4	, &	darkgreen030	, &	blue0007	, &	custard	, &	peacock	, &	orange880	);}
void	munge1_162	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall180	(f, duration, strip, 	6	, &	cobalt0815	, &	blue0015	, &	darkorange330	, &	blue0007	, &	lemon	);}
void	munge1_163	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall270	(f, duration, strip, 	5	, &	darkgreen030	, &	darkred300	, &	green0150	, &	magenta0707	, &	lime0370	);}
void	munge1_164	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	Tfall90	(f, duration, strip, 	0	, &	cobalt0815	, &	red0700	, &	cyan0077	, &	magenta15015	, &	lime8150	);}
void	munge1_165	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	darkgreen030	, &	red1500	, &	cyan01515	, &	pink	, &	yellow15150	);}
void	munge1_166	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	2	, &	peacock	, &	redblack100	, &	darkcyan033	, &	crimson0703	, &	darkgreen030	);}
void	munge1_167	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	6	, &	blue0007	, &	custard	, &	peacock	, &	crimson1508	, &	darklime130	);}
void	munge1_168	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	2	, &	blue0015	, &	darkorange330	, &	blue0007	, &	darkcrimson301	, &	emerald080	);}
void	munge1_169	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	5	, &	blueblack001	, &	orange880	, &	blue0015	, &	magenta15015	, &	green0070	);}
void	munge1_170	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	1	, &	cobalt0037	, &	lemon	, &	blueblack001	, &	pink	, &	green0150	);}
void	munge1_171	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	blue0015	, &	blueblack001	, &	cobalt0037	, &	crimson0703	, &	cyan0077	);}
void	munge1_172	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	0	, &	blueblack001	, &	lime8150	, &	cobalt0815	, &	blueblack001	, &	cyan01515	);}
void	munge1_173	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	cobalt0037	, &	yellow15150	, &	darkblue003	, &	darkcrimson301	, &	darkcyan033	);}
void	munge1_174	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	4	, &	white151515	, &	darkgreen030	, &	purple8015	, &	darkred300	, &	peacock	);}
void	munge1_175	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	unbloom4	(f, duration, strip, 	5	, &	peacock	, &	darklime130	, &	white151515	, &	red0700	, &	blue0007	);}
void	munge1_176	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wash4	(f, duration, strip, 	3	, &	cobalt0815	, &	emerald080	, &	peacock	, &	red1500	, &	blue0015	);}
void	munge1_177	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	wipe4	(f, duration, strip, 	2	, &	cobalt0815	, &	green0070	, &	darkgreen030	, &	redblack100	, &	blueblack001	);}
void	munge1_178	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	1	, &	darkgreen030	, &	green0150	, &	cobalt0815	, &	custard	, &	cobalt0037	);}
void	munge1_179	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	2	, &	cobalt0815	, &	cyan0077	, &	peacock	, &	darkorange330	, &	cobalt0815	);}
void	munge1_180	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	darkgreen030	, &	cyan01515	, &	blue0007	, &	orange880	, &	darkblue003	);}
void	munge1_181	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	1	, &	cobalt0815	, &	darkcyan033	, &	blue0015	, &	lemon	, &	purple8015	);}
void	munge1_182	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	0	, &	cobalt0815	, &	peacock	, &	blueblack001	, &	lime0370	, &	white151515	);}
void	munge1_183	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	4	, &	cobalt0815	, &	blue0007	, &	cobalt0037	, &	lime8150	, &	peacock	);}
void	munge1_184	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	3	, &	blueblack001	, &	blue0015	, &	cobalt0815	, &	yellow15150	, &	blueblack001	);}
void	munge1_185	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	5	, &	darkcrimson301	, &	blueblack001	, &	darkblue003	, &	darkgreen030	, &	cobalt0037	);}
void	munge1_186	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	2	, &	darkred300	, &	cobalt0037	, &	redblack100	, &	darklime130	, &	white151515	);}
void	munge1_187	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	everwipe4	(f, duration, strip, 	5	, &	redblack100	, &	cobalt0815	, &	custard	, &	emerald080	, &	peacock	);}
void	munge1_188	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	0	, &	custard	, &	darkblue003	, &	darkorange330	, &	green0070	, &	blue0007	);}
void	munge1_189	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	5	, &	darkorange330	, &	purple8015	, &	orange880	, &	green0150	, &	magenta0707	);}
void	munge1_190	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	0	, &	orange880	, &	white151515	, &	lemon	, &	cyan0077	, &	cobalt0815	);}
void	munge1_191	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	5	, &	lemon	, &	peacock	, &	lime0370	, &	cyan01515	, &	cobalt0815	);}
void	munge1_192	(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip) {	spread4	(f, duration, strip, 	0	, &	cobalt0815	, &	cobalt0815	, &	cobalt0815	, &	darkcyan033	, &	cobalt0815	);}
