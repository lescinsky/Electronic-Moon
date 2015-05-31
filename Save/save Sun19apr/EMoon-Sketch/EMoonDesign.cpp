//
//  EMoonDesign.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 9/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "EMoonDesign.h"



extern 	Adafruit_NeoPixel*	pod0	;
extern 	Adafruit_NeoPixel*	pod1	;
extern 	Adafruit_NeoPixel*	pod2	;
extern 	Adafruit_NeoPixel*	pod3	;
extern 	Adafruit_NeoPixel*	pod4	;
extern 	Adafruit_NeoPixel*	pod5	;
extern 	Adafruit_NeoPixel*	pod6	;
extern 	Adafruit_NeoPixel*	pod7	;
extern 	Adafruit_NeoPixel*	pod8	;
extern 	Adafruit_NeoPixel*	pod9	;
extern 	Adafruit_NeoPixel*	pod10	;
extern 	Adafruit_NeoPixel*	pod11	;
extern 	Adafruit_NeoPixel*	pod12	;
extern 	Adafruit_NeoPixel*	pod13	;
extern 	Adafruit_NeoPixel*	pod14	;
extern 	Adafruit_NeoPixel*	pod15	;
extern 	Adafruit_NeoPixel*	edge0	;
extern 	Adafruit_NeoPixel*	edge1	;
extern 	Adafruit_NeoPixel*	edge2	;
extern 	Adafruit_NeoPixel*	edge3	;
extern 	Adafruit_NeoPixel*	edge4	;
extern 	Adafruit_NeoPixel*	edge5	;
extern 	Adafruit_NeoPixel*	edge6	;
extern 	Adafruit_NeoPixel*	edge7	;
extern 	Adafruit_NeoPixel*	edge8	;
extern 	Adafruit_NeoPixel*	edge9	;
extern 	Adafruit_NeoPixel*	edge10	;
extern 	Adafruit_NeoPixel*	edge11	;

extern activePrimitiveLightshowList* APL_list;



//-----------SQ PRIMITIVES--------------------------

void clearfield(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    specklequad(f, duration, 	pod0	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod1	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod2	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod3	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod4	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod5	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod6	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod7	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod8	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod9	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod10	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod11	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod12	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod13	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod14	   , 0, NULL, C0, C1, NULL, NULL);
    specklequad(f, duration, 	pod15	   , 0, NULL, C0, C1, NULL, NULL);

  
}

void specklequad(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    for (int i= 0; i < strip->numPixels();) {
        strip->setPixelColor(i++, C0());
        strip->setPixelColor(i++, C1());
    }
}



void fillsq(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    fmprim4(&fmfill, f, duration, NULL, (int)index, CX, NULL, NULL, NULL, NULL);
}

void specklesq(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    fmprim4(&fmspeckle, f, duration, NULL, (int)index, CX, C0, C1, NULL, NULL);
}
    
    void specklesq4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
        
        fmprim4(&fmspeckle4, f, duration, NULL, (int)index, CX, C0, C1, C2, C3);
    }

void fmfill(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (direction == -1) {
        for (int i= offset+count-1; i >= offset; i--) {
            strip->setPixelColor(i, CX());
        }
    }
    else {
        for (int i= offset; i < offset+count; i++) {
            strip->setPixelColor(i, CX());
        }
        
    }
}

void fmspeckle(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (direction == -1) {
        for (int i= offset+count-1; i >= offset;) {
            strip->setPixelColor(i--, C0());
            strip->setPixelColor(i--, C1());
        }
    }
    else {
        for (int i= offset; i < offset+count; ) {
            strip->setPixelColor(i++, C0());
            strip->setPixelColor(i++, C1());
        }
        
    }
}
    
    void fmspeckle4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int offset, int direction, int count, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
        
        if (direction == -1) {
            for (int i= offset+count-1; i >= offset;) {
                strip->setPixelColor(i--, C0());
                strip->setPixelColor(i--, C1());
                strip->setPixelColor(i--, C2());
                strip->setPixelColor(i--, C3());
            }
        }
        else {
            for (int i= offset; i < offset+count; ) {
                strip->setPixelColor(i++, C0());
                strip->setPixelColor(i++, C1());
                strip->setPixelColor(i++, C2());
                strip->setPixelColor(i++, C3());
                
            }
            
        }
    }

    // This is not a proper update function.  It is a helper function
    
    void fmprim4(fullMoonPrimitive prim,  eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* dummystrip, int index, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
        
        Adafruit_NeoPixel* strip = NULL;
        int direction = 0;
        int count = 0;
        int offset = 0;
        
        switch (index) {
            case 	1	:strip =	edge0	; offset = 	0	; count=	6	;direction=	1	; break;
            case 	2	:strip =	edge0	; offset = 	6	; count=	6	;direction=	1	; break;
            case 	3	:strip =	edge0	; offset = 	12	; count=	6	;direction=	1	; break;
            case 	4	:strip =	edge0	; offset = 	18	; count=	6	;direction=	1	; break;
            case 	5	:strip =	edge2	; offset = 	0	; count=	6	;direction=	1	; break;
            case 	6	:strip =	edge2	; offset = 	6	; count=	6	;direction=	1	; break;
            case 	7	:strip =	edge2	; offset = 	12	; count=	6	;direction=	1	; break;
            case 	8	:strip =	edge2	; offset = 	18	; count=	6	;direction=	1	; break;
            case 	9	:								break;
            case 	10	:strip =	edge11	; offset = 	18	; count=	6	;direction=	-1	; break;
            case 	11	:strip =	pod0	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	12	:strip =	pod0	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	13	:strip =	pod1	; offset = 	24	; count=	8	;direction=	-1	; break;
            case 	14	:strip =	pod1	; offset = 	16	; count=	8	;direction=	-1	; break;
            case 	15	:strip =	pod2	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	16	:strip =	pod2	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	17	:strip =	pod3	; offset = 	24	; count=	8	;direction=	-1	; break;
            case 	18	:strip =	pod3	; offset = 	16	; count=	8	;direction=	-1	; break;
            case 	19	:strip =	edge3	; offset = 	0	; count=	6	;direction=	1	; break;
            case 	20	:strip =	edge11	; offset = 	12	; count=	6	;direction=	-1	; break;
            case 	21	:strip =	pod0	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	22	:strip =	pod0	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	23	:strip =	pod1	; offset = 	0	; count=	8	;direction=	-1	; break;
            case 	24	:strip =	pod1	; offset = 	8	; count=	8	;direction=	-1	; break;
            case 	25	:strip =	pod2	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	26	:strip =	pod2	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	27	:strip =	pod3	; offset = 	0	; count=	8	;direction=	-1	; break;
            case 	28	:strip =	pod3	; offset = 	8	; count=	8	;direction=	-1	; break;
            case 	29	:strip =	edge3	; offset = 	8	; count=	6	;direction=	1	; break;
            case 	30	:strip =	edge11	; offset = 	6	; count=	6	;direction=	-1	; break;
            case 	31	:strip =	pod4	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	32	:strip =	pod4	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	33	:strip =	pod5	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	34	:strip =	pod5	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	35	:strip =	pod6	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	36	:strip =	pod6	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	37	:strip =	pod7	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	38	:strip =	pod7	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	39	:strip =	edge3	; offset = 	12	; count=	6	;direction=	1	; break;
            case 	40	:strip =	edge11	; offset = 	0	; count=	6	;direction=	-1	; break;
            case 	41	:strip =	pod4	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	42	:strip =	pod4	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	43	:strip =	pod5	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	44	:strip =	pod5	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	45	:strip =	pod6	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	46	:strip =	pod6	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	47	:strip =	pod7	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	48	:strip =	pod7	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	49	:strip =	edge3	; offset = 	18	; count=	6	;direction=	1	; break;
            case 	50	:strip =	edge9	; offset = 	18	; count=	6	;direction=	-1	; break;
            case 	51	:strip =	pod8	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	52	:strip =	pod8	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	53	:strip =	pod9	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	54	:strip =	pod9	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	55	:strip =	pod10	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	56	:strip =	pod10	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	57	:strip =	pod11	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	58	:strip =	pod11	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	59	:strip =	edge5	; offset = 	0	; count=	6	;direction=	1	; break;
            case 	60	:strip =	edge9	; offset = 	12	; count=	6	;direction=	-1	; break;
            case 	61	:strip =	pod8	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	62	:strip =	pod8	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	63	:strip =	pod9	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	64	:strip =	pod9	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	65	:strip =	pod10	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	66	:strip =	pod10	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	67	:strip =	pod11	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	68	:strip =	pod11	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	69	:strip =	edge5	; offset = 	6	; count=	6	;direction=	1	; break;
            case 	70	:strip =	edge9	; offset = 	6	; count=	6	;direction=	-1	; break;
            case 	71	:strip =	pod12	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	72	:strip =	pod12	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	73	:strip =	pod13	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	74	:strip =	pod13	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	75	:strip =	pod14	; offset = 	24	; count=	8	;direction=	-1	; break;
            case 	76	:strip =	pod14	; offset = 	16	; count=	8	;direction=	-1	; break;
            case 	77	:strip =	pod15	; offset = 	24	; count=	8	;direction=	1	; break;
            case 	78	:strip =	pod15	; offset = 	0	; count=	8	;direction=	1	; break;
            case 	79	:strip =	edge5	; offset = 	12	; count=	6	;direction=	1	; break;
            case 	80	:strip =	edge9	; offset = 	0	; count=	6	;direction=	-1	; break;
            case 	81	:strip =	pod12	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	82	:strip =	pod12	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	83	:strip =	pod13	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	84	:strip =	pod13	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	85	:strip =	pod14	; offset = 	0	; count=	8	;direction=	-1	; break;
            case 	86	:strip =	pod14	; offset = 	8	; count=	8	;direction=	-1	; break;
            case 	87	:strip =	pod15	; offset = 	16	; count=	8	;direction=	1	; break;
            case 	88	:strip =	pod15	; offset = 	8	; count=	8	;direction=	1	; break;
            case 	89	:strip =	edge5	; offset = 	18	; count=	6	;direction=	1	; break;
            case 	90	:								break;
            case 	91	:strip =	edge8	; offset = 	18	; count=	6	;direction=	-1	; break;
            case 	92	:strip =	edge8	; offset = 	12	; count=	6	;direction=	-1	; break;
            case 	93	:strip =	edge8	; offset = 	6	; count=	6	;direction=	-1	; break;
            case 	94	:strip =	edge8	; offset = 	0	; count=	6	;direction=	-1	; break;
            case 	95	:strip =	edge6	; offset = 	18	; count=	6	;direction=	-1	; break;
            case 	96	:strip =	edge6	; offset = 	12	; count=	6	;direction=	-1	; break;
            case 	97	:strip =	edge6	; offset = 	6	; count=	6	;direction=	-1	; break;
            case 	98	:strip =	edge6	; offset = 	0	; count=	6	;direction=	-1	; break;
            case 	99	:								break;
            case 	100	:								break;
            case 	101	:strip =	edge1	; offset = 	0	; count=	6	;direction=	1	; break;
            case 	102	:strip =	edge1	; offset = 	6	; count=	6	;direction=	1	; break;
            case 	103	:strip =	edge1	; offset = 	12	; count=	6	;direction=	1	; break;
            case 	104	:strip =	edge1	; offset = 	18	; count=	6	;direction=	1	; break;
            case 	201	:strip =	edge10	; offset = 	18	; count=	6	;direction=	-1	; break;
            case 	202	:strip =	edge10	; offset = 	12	; count=	6	;direction=	-1	; break;
            case 	203	:strip =	edge10	; offset = 	6	; count=	6	;direction=	-1	; break;
            case 	204	:strip =	edge10	; offset = 	0	; count=	6	;direction=	-1	; break;
            case 	301	:strip =	edge4	; offset = 	0	; count=	6	;direction=	1	; break;
            case 	302	:strip =	edge4	; offset = 	6	; count=	6	;direction=	1	; break;
            case 	303	:strip =	edge4	; offset = 	12	; count=	6	;direction=	1	; break;
            case 	304	:strip =	edge4	; offset = 	18	; count=	6	;direction=	1	; break;
            case 	401	:strip =	edge7	; offset = 	18	; count=	6	;direction=	-1	; break;
            case 	402	:strip =	edge7	; offset = 	12	; count=	6	;direction=	-1	; break;
            case 	403	:strip =	edge7	; offset = 	6	; count=	6	;direction=	-1	; break;
            case 	404	:strip =	edge7	; offset = 	0	; count=	6	;direction=	-1	; break;    default: break;
        }
        if (strip != NULL && prim != NULL) {
            (*prim)(f, duration, strip,  offset, direction, count, CX, C0, C1, C2, C3);
        }
    }

//------------ TETRIS---------------------------------



void Tdraw(int block, colourFunction CX) {
    if (block > 10 && block < 89) fillsq(0, 1, NULL, block, CX, NULL, NULL, NULL, NULL);
}

void Tcleardraw(int block, colourFunction CX) {
    if (block > 9 && block < 90 ) fillsq(0, 1, NULL, block, CX, NULL, NULL, NULL, NULL);
    block -= 10;
    if (block > 9 && block < 90 )specklesq(0, 1, NULL, block, NULL, &Tfield0, &Tfield1, NULL, NULL);
}

void tetrisfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, int block0, int block1, int block2, int block3, char mask, colourFunction CX) {
    
    int stepSize = duration / 16;
    
    int moves = (f / stepSize) * 10;
    
    block0 += moves + s;
    block1 += moves + s;
    block2 += moves + s;
    block3 += moves + s;
    
    
    if (mask & 1) Tcleardraw(block0, CX); else Tdraw(block0, CX);
    if (mask & 2) Tcleardraw(block1, CX); else Tdraw(block1, CX);
    if (mask & 4) Tcleardraw(block2, CX); else Tdraw(block2, CX);
    if (mask & 8) Tcleardraw(block3, CX); else Tdraw(block3, CX);
    
}

//typedef int Tshape[20] = {;


void tetrisanim(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, int* shape, int mask, colourFunction CX) {
   
    int stepSize = duration / 16;
    int start = s & 7;          // first 3 bits are start position
    int end = (s & 56);// second 3 bits are end position
    int slide = end - start;
    int turn = (s & 192);          // next 2 bits are amount of rotation
    int incr = 0;
    int block0, block1, block2, block3;

    int moves = (f / stepSize); // i.e. moves left in the anim
    int slideincr = (slide < 0) ? -1 : 1;
    
    int limit = 3;
    if (moves < limit) {
        incr = moves * 10 + start;
        mask = shape[4];
        block0 = shape[0] + incr;
        block1 = shape[1] + incr;
        block2 = shape[2] + incr;
        block3 = shape[3] + incr;
    }  // if
    else {  // else 0
        moves -= limit;
        limit = slide * slideincr;

        if (moves < limit)  {
                incr = 30 + start + moves * slideincr;
            incr = moves * 10 + start;
            mask = shape[4];
            block0 = shape[0] + incr;
            block1 = shape[1] + incr;
            block2 = shape[2] + incr;
            block3 = shape[3] + incr;
            }  // if
        else {   // else 1
            moves -= limit;
            limit = turn;
            if (moves < limit)  {
                incr = 30 + end;
                switch (moves) {
                    case 1:
                        mask = shape[9];
                        block0 = shape[5] + incr;
                        block1 = shape[6] + incr;
                        block2 = shape[7] + incr;
                        block3 = shape[8] + incr;
                        break;
                    case 2:
                        mask = shape[14];
                        block0 = shape[10] + incr;
                        block1 = shape[11] + incr;
                        block2 = shape[12] + incr;
                        block3 = shape[13] + incr;
                        break;
                    case 3:
                        mask = shape[19];
                        block0 = shape[15] + incr;
                        block1 = shape[16] + incr;
                        block2 = shape[17] + incr;
                        block3 = shape[18] + incr;
                        break;
                    default:
                        break;
                    } // switch
             } // if
             else {  // else 2
                 moves -= limit;
                incr = 30 + moves * 10 + end;
                 switch (turn) {
                 case 1:
                 mask = shape[5];
                 block0 = shape[6] + incr;
                 block1 = shape[7] + incr;
                 block2 = shape[8] + incr;
                 block3 = shape[9] + incr;
                 break;
                 case 2:
                 mask = shape[10];
                 block0 = shape[11] + incr;
                 block1 = shape[12] + incr;
                 block2 = shape[13] + incr;
                 block3 = shape[14] + incr;
                 break;
                 case 3:
                 mask = shape[15];
                  block0 = shape[16] + incr;
                  block1 = shape[17] + incr;
                  block2 = shape[18] + incr;
                  block3 = shape[19] + incr;
                  break;
                  default:
                  break;
                  } // switch
              } //else 2
          }  // else 1
      }  // else 0


    if (mask & 1) Tcleardraw(block0, CX); else Tdraw(block0, CX);
    if (mask & 2) Tcleardraw(block1, CX); else Tdraw(block1, CX);
    if (mask & 4) Tcleardraw(block2, CX); else Tdraw(block2, CX);
    if (mask & 8) Tcleardraw(block3, CX); else Tdraw(block3, CX);

}
                              


void Tfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 1, 2, 3, 12, 7, &Tcolour);
    
}

void Tfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, -8, 1, 2, 12, 3, &Tcolour);
    
}

void Tfall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 2, 11, 12, 13, 11, &Tcolour);
    
}

void Tfall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, -9, 1, 2, 11, 5, &Tcolour);
    
}

void Lfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, -9, 1, 11, 12, 9, &Lcolour);
    
}

void Lfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 1, 2, 3, 11, 7, &Lcolour);
    
}
void Lfall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, -9, -8, 2, 12, 3, &Lcolour);
    
}
void Lfall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 3, 11, 12, 13, 7, &Lcolour);
    
}

void Jfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {

    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, -8, 2, 11, 12, 5, &Jcolour);
    
}

void Jfall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 1, 2, 3, 13, 7, &Jcolour);
    
}

void Jfall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, -9, -8, 1, 11, 3, &Jcolour);
    
}

void Jfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 1, 11, 12, 13, 13, &Jcolour);
    
}

void Sfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {

    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 2, 3, 11, 12, 7, &Scolour);
    
}

void Sfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 6) s = 6;
    tetrisfall(f, duration, strip, s, -9, 1, 2, 12, 5, &Scolour);
    
}

void Zfall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {

    if (s > 5) s = 5;
    tetrisfall(f, duration, strip, s, 1, 2, 12, 13, 11, &Zcolour);
    
}

void Zfall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 6) s = 6;
    tetrisfall(f, duration, strip, s, -8, 1, 2, 11, 3, &Zcolour);
    
}

void Ifall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {


    if (s > 4) s = 4;
    tetrisfall(f, duration, strip, s, -18, -8, 2, 12, 1, &Icolour);
    
}

void Ifall90(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 3) s = 3;
    tetrisfall(f, duration, strip, s, 12, 13, 14, 15, 15, &Icolour);
    
}

void Ifall180(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    
    if (s > 4) s = 4;
    tetrisfall(f, duration, strip, s, -17, -7, 3, 13, 1,  &Icolour);
}

void Ifall270(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    
    if (s > 4) s = 4;
    tetrisfall(f, duration, strip, s, 11 ,12, 13, 14, 15, &Icolour);
}

void Ofall(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (s > 6) s = 6;
    tetrisfall(f, duration, strip, s, 1, 2, 11, 12, 3, &Ocolour);
    
}





//----------- WIPES --------------------

void wipe4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    int p, refreshRate, ds;
    int stepSize = duration / 4;
    int i;
    int32_t colour;  // i.e. this is set to the neutral colour
    
    i = f;
    if (i < strip->numPixels()) {
        strip->setPixelColor(i, C0());
    }
    if (f / 4 > 0) {
        i -= stepSize;
        if (i < strip->numPixels()) {
            strip->setPixelColor(i, C1());
        }
    }
    if (f / 4 > 1) {
        i -= stepSize;
        if (i < strip->numPixels()) {
            strip->setPixelColor(i, C2());
        }
    }
    if (f / 4 > 2) {
        i -= stepSize;
        if (i < strip->numPixels()) {
            strip->setPixelColor(i, C3());
        }
    }
    
}

void everwipe4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    int stepSize = strip->numPixels() / 4;
    int i;
    
    i = f % strip->numPixels();
 
    
    if (i < stepSize) {
        strip->setPixelColor(i, C0());
        i += stepSize;
        strip->setPixelColor(i, C3());
        i += stepSize;
        strip->setPixelColor(i, C2());
        i += stepSize;
        strip->setPixelColor(i, C1());
        return;
    }
    i -= stepSize;
    if (i < stepSize) {
        strip->setPixelColor(i, C1());
        i += stepSize;
        strip->setPixelColor(i, C0());
        i += stepSize;
        strip->setPixelColor(i, C3());
        i += stepSize;
        strip->setPixelColor(i, C2());
        return;
    }
    i -= stepSize;
    if (i -= stepSize < stepSize) {
        strip->setPixelColor(i, C2());
        i += stepSize;
        strip->setPixelColor(i, C1());
        i += stepSize;
        strip->setPixelColor(i, C0());
        i += stepSize;
        strip->setPixelColor(i, C3());
        return;
    }
    i -= stepSize;
    strip->setPixelColor(i, C3());
    i += stepSize;
    strip->setPixelColor(i, C2());
    i += stepSize;
    strip->setPixelColor(i, C1());
    i += stepSize;
    strip->setPixelColor(i, C0());



    
}

//----------- FADES --------------------

void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    
    int stepSize = duration / 2;
    float dr,dg,db;
    eMoonColour c0, c1;
    uint8_t r0, g0, b0, r1, g1, b1;
    float d = (float)(f % stepSize) / (float)stepSize;
    
    switch (f / stepSize) {
        case 0:
            c1 = C0();
            c0 = CX();
            break;
        case 1:
            c1 = C1();
            c0 = C0();
            break;
        default:
            break;
    }

    b0 = c0 & 0xff;
    b1 = c1 & 0xff;
    c0 = c0 >> 8;
    c1 = c1 >> 8;
    g0 = c0 & 0xff;
    g1 = c1 & 0xff;
    r0 = c0 >> 8;
    r1 = c1 >> 8;

    dr = d * (float)(r1 - r0);
    dg = d * (float)(g1 - g0);
    db = d * (float)(b1 - b0);
 
        
        
        for(int p=0; p < strip->numPixels(); p++) {
            strip->setPixelColor(p, (uint8_t)(r0+dr), (uint8_t)(g0+dg), (uint8_t)(b0+db));


        }
    
}

void fade4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    
    int stepSize = duration / 4;
    float dr,dg,db;
    eMoonColour c0, c1;
    uint8_t r0, g0, b0, r1, g1, b1;
    float d = (float)(f % stepSize) / (float)stepSize;
    
    switch (f / stepSize) {
        case 0:
            c1 = C0();
            c0 = CX();
            break;
        case 1:
            c1 = C1();
            c0 = C0();
            break;
        case 2:
            c1 = C2();
            c0 = C1();
            break;
        case 3:
            c1 = C3();
            c0 = C2();
            break;
        default:
            break;
    }
    
    b0 = c0 & 0xff;
    b1 = c1 & 0xff;
    c0 = c0 >> 8;
    c1 = c1 >> 8;
    g0 = c0 & 0xff;
    g1 = c1 & 0xff;
    r0 = c0 >> 8;
    r1 = c1 >> 8;
    
    dr = d * (float)(r1 - r0);
    dg = d * (float)(g1 - g0);
    db = d * (float)(b1 - b0);    
    
    
    for(int p=0; p < strip->numPixels(); p++) {
        strip->setPixelColor(p, (uint8_t)(r0+dr), (uint8_t)(g0+dg), (uint8_t)(b0+db));
        
        
    }
    
}




//void fade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1) {
//   
//    uint8_t basisValue = 0;
//    int p, refreshRate, ds;
//    int stepSize = duration / 2;
//    uint32_t delta;
//    int32_t colour = 0x000000 + CX();  // i.e. this is set to the neutral colour
//
//    
//    // ! s must be > 0
//    s = min(s, stepSize);
//    // set refreshRate (how often do we actually update the strip)
//    if (s > 16) {  // ! redundant for s = 1
//        refreshRate = s / 16;
//        ds = 16;
//    }
//    else {
//        refreshRate = 1;
//        ds = s;
//    }
//    
//        if ( (f % stepSize) < s ) {  // this prevents updating after all the deltas have been applied
// 
//            // set delta based on which step we are in
//            if (f < stepSize) {
//                colour = C1() + ((f % stepSize) * (C0()-C1()) / s);
//            }
//            else {
//                colour = C0() + ((f % stepSize) * (C1()-C0()) / s);
//            }
//
//            
//            for(p=0; p < strip->numPixels(); p++) {
//                strip->setPixelColor(p, (uint32_t)colour);
//            }
//        }
//
//}

void deltaFade2(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1) {
    
    uint8_t basisValue = 0;
    int p, refreshRate, ds;
    int stepSize = duration / 2;
    uint32_t delta;
    
    // ! s must be > 0
    s = min(s, stepSize);
    // set refreshRate (how often do we actually update the strip)
    if (s > 16) {  // ! redundant for s = 1
        refreshRate = s / 16;
        ds = 16;
    }
    else {
        refreshRate = 1;
        ds = s;
    }
    
    if ( !(f % refreshRate) ) {   // this prevents updating except at regular intervals
        if ( (f % stepSize) < s ) {  // this prevents updating after all the deltas have been applied
            
            // set delta based on which step we are in
            if (f < stepSize) {
                delta = C0();
            }
            else {
                delta = C1();
            }
            delta /= ds;
            
            for(p=0; p < strip->numPixels(); p++) {
                strip->setPixelColor(p, strip->getPixelColor(p) + delta);
            }
        }
    }
}

//------------ SPREADS -------------------
void spread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
 colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    int p;
    int stepSize = strip->numPixels() / 4;
    int32_t delta = 0x000080;
    int32_t colour = 0x000000 + CX();  // i.e. this is set to the neutral colour
    
    if (f <= 1) {
    
        // ! s assumed to be > 0 and <= 16
        s = min(s, stepSize);

        for(p=0; p < strip->numPixels(); p++) {
            
            if ( !(p % stepSize) ) {
                switch (p / stepSize) {
                    case 0:
                        colour = C3();
                        delta = C0()-C3();
                        break;
                    case 1:
                        colour = C0();
                        delta = C1()-C0();
                        break;
                    case 2:
                        colour = C1();
                        delta = C2()-C1();
                        break;
                    case 3:
                        colour = C2();
                        delta = C3()-C2();
                        break;
                    default:
                        break;
                }
                delta /= s;
            }

             if ( (p % stepSize) < s ) {
                colour  += delta;
             }
        
            strip->setPixelColor(p, colour);
        }
    }
    
}

void deltaSpread4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s,
             colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    int p;
    int stepSize = strip->numPixels() / 4;
    int32_t delta = 0x000080;
    int32_t colour = 0x000000 + CX();  // i.e. this is set to the neutral colour
    
    if (f <= 1) {
        
        // ! s assumed to be > 0 and <= 16
        s = min(s, stepSize);
        
        for(p=0; p < strip->numPixels(); p++) {
            
            if ( !(p % stepSize) ) {
                switch (p / stepSize) {
                    case 0:
                        delta = C0();
                        break;
                    case 1:
                        delta = C1();
                        break;
                    case 2:
                        delta = C2();
                        break;
                    case 3:
                        delta = C3();
                        break;
                    default:
                        break;
                }
                delta /= s;
            }
            
            if ( (p % stepSize) < s ) {
                colour  += delta;
            }
            
            strip->setPixelColor(p, colour);
        }
    }
    
}

void quadshuffle(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    int shuffleStep = duration / 16;
//    if (f % shuffleStep) return;
    int stepSize = strip->numPixels() / 4;
    
    int t;
    
    t = 0;
    eMoonColour col0, col1, col2, col3;
    
    switch ( f / shuffleStep ) {

        case 0:
            col0 = C0();
            col1 = C3();
            col2 = C0();
            col3 = C1();
            break;
        case 1:
            col0 = C1();
            col1 = C2();
            col2 = C2();
            col3 = C0();
            break;
        case 2:
            col0 = C0();
            col1 = C3();
            col2 = C2();
            col3 = C1();
            break;
        case 3:
            col0 = C0();
            col1 = C1();
            col2 = C2();
            col3 = C3();
            break;
        case 4:
            col0 = C3();
            col1 = C1();
            col2 = C0();
            col3 = C3();
            break;
        case 5:
            col0 = C1();
            col1 = C1();
            col2 = C1();
            col3 = C3();
            break;
        case 6:
            col0 = C1();
            col1 = C2();
            col2 = C2();
            col3 = C3();
            break;
        case 7:
            col0 = C2();
            col1 = C1();
            col2 = C3();
            col3 = C0();
            break;
        case 8:
            col0 = C0();
            col1 = C3();
            col2 = C2();
            col3 = C3();
            break;
        case 9:
            col0 = C0();
            col1 = C1();
            col2 = C2();
            col3 = C1();
            break;
        case 10:
            col0 = C2();
            col1 = C1();
            col2 = C2();
            col3 = C3();
            break;
        case 11:
            col0 = C3();
            col1 = C0();
            col2 = C0();
            col3 = C2();
            break;
        case 12:
            col0 = C0();
            col1 = C1();
            col2 = C0();
            col3 = C2();
            break;
        case 13:
            col0 = C0();
            col1 = C2();
            col2 = C3();
            col3 = C2();
            break;
        case 14:
            col0 = C3();
            col1 = C1();
            col2 = C2();
            col3 = C1();
            break;
        case 15:
            col0 = C0();
            col1 = C1();
            col2 = C2();
            col3 = C3();
            break;

            
        default:
            break;
    }
    
    int limit = stepSize;
    

    for (t=0; t < limit; t++)   {
        strip->setPixelColor(t, col0);
    }
    for (limit += stepSize; t < limit; t++)   {
        strip->setPixelColor(t, col1);
    }
    for (limit += stepSize; t < limit; t++)   {
        strip->setPixelColor(t, col2);
    }
    for (limit += stepSize; t < limit; t++)   {
        strip->setPixelColor(t, col3);
    }

    
    
}

//----------- SPINS --------------------

void spin4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (f % 2) return;
    f /= 2;
    int stepSize = strip->numPixels() / 8;
 
        int limit, t;
        
        t = (f%8) * stepSize;
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C0());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C2());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
        t %= strip->numPixels();
        for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());

    
    
}

void quadspin4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (f % 2) return;
    f /= 2;
    int stepSize = strip->numPixels() / 8;
    
    int limit, t;
    
    t = 0;
    switch (f % 8) {
        case 0:
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 1:
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 2:
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 3:
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 4:
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 5:
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 6:
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            break;
        case 7:
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C0());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C1());
            t %= strip->numPixels();
            for (limit = t + 2*stepSize; t < limit; t++) strip->setPixelColor(t, C2());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, C3());
            t %= strip->numPixels();
            for (limit = t + stepSize; t < limit; t++) strip->setPixelColor(t, CX());
            t %= strip->numPixels();
            break;
            
        default:
            break;
    }
    
    
}

//----------- BLOOMS --------------------



void bloom4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (f % 2) return;
    f /= 2;
    int stepSize = strip->numPixels() / 4;
    
    int t;
    
    t = 0;
    eMoonColour col;
    
    switch ( (f / (stepSize/2)) % 4 ) {
        case 0:
            col = C0();
            break;
        case 1:
            col = C1();
            break;
        case 2:
            col = C2();
            break;
        case 3:
            col = C3();
            break;
            
        default:
            break;
    }
    
    int left, right;
    
    left = f % (stepSize/2);
    right = stepSize - left - 1;
    for (t=left; t < strip->numPixels(); t += stepSize)   {
        strip->setPixelColor(t, col);
    }
    for (t=right; t < strip->numPixels(); t += stepSize)   {
        strip->setPixelColor(t, col);
    }
    
    
}

void unbloom4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (f % 2) return;
    f /= 2;
    int stepSize = strip->numPixels() / 4;
    int halfstep = stepSize/2;
    
    int t;
    
    eMoonColour col;
    
    switch ( (f / halfstep) % 4 ) {
        case 0:
            col = C0();
            break;
        case 1:
            col = C1();
            break;
        case 2:
            col = C2();
            break;
        case 3:
            col = C3();
            break;
            
        default:
            break;
    }
    
    int left, right, shift;
    
    shift = f % (halfstep);

    left = halfstep-shift-1;
    right = halfstep + shift;

    for (t=left; t < strip->numPixels(); t += stepSize)   {
        strip->setPixelColor(t, col);
    }
    for (t=right; t < strip->numPixels(); t += stepSize)   {
        strip->setPixelColor(t, col);
    }
    
    
}

void curtain4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (f % 2) return;
    f /= 2;
    int stepSize = strip->numPixels() / 4;
    int halfstep = stepSize/2;
    
    int t;
    
    eMoonColour col;
    
    switch ( (f / halfstep) % 4 ) {
        case 0:
            col = C0();
            break;
        case 1:
            col = C1();
            break;
        case 2:
            col = C2();
            break;
        case 3:
            col = C3();
            break;
            
        default:
            break;
    }
    
    int left, right, shift;
    
    shift = f % (halfstep);
    left = 3*halfstep-shift-1;
    right = 3*halfstep + shift;
    
    for (t=left; t < strip->numPixels(); t += 2*stepSize)   {
        strip->setPixelColor(t, col);
    }
    for (t=right; t < strip->numPixels(); t += 2*stepSize)   {
        strip->setPixelColor(t, col);
    }
    

    if (shift == halfstep-1) {
        for (t=0; t < 2*stepSize; t++)   {
            strip->setPixelColor(t, col);
        }
        for (t=stepSize*2; t < strip->numPixels(); t++)   {
            strip->setPixelColor(t, col);
        }
    }

    
    
}

void wash4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    if (f % 2) return;
    f /= 2;
    int stepSize = strip->numPixels() / 2;
    int halfstep = stepSize/4;
    
    int t;
    
    eMoonColour col;
    
    switch ( (f / stepSize) % 4 ) {
        case 0:
            col = C0();
            break;
        case 1:
            col = C1();
            break;
        case 2:
            col = C2();
            break;
        case 3:
            col = C3();
            break;
            
        default:
            break;
    }
    
    int shift = f % stepSize;
    strip->setPixelColor(shift, col);
   strip->setPixelColor(strip->numPixels()-shift - 1, col);

    
    
    
}

//------------ SPARKLES ---------------------------------------------

void sparklefill4(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    

    eMoonColour col, colx = CX();
    int t, tx;
    if (f == 1) {
        for (t=0; t < strip->numPixels(); t++) {
            strip->setPixelColor(t, colx);
        }
    }
    int stepSize = duration / 16;
    if (f % stepSize) return;
    int factor = strip->numPixels() / 16;
    
    
    
    switch (f / stepSize) {
            
        case 0:
            t = 14;
            tx = 0;
            col = C0();
            break;
        case 1:
            t = 11;
            tx = 14;
            col = C3();
            break;
        case 2:
            t = 5;
            tx = 11;
            col = C0();
            break;
        case 3:
            t = 2;
            tx = 5;
            col = C1();
            break;
        case 4:
            t = 9;
            tx = 2;
            col = C2();
            break;
        case 5:
            t = 6;
            tx = 9;
            col = C0();
            break;
        case 6:
            t = 1;  tx = 6;          col = C3();
            break;
        case 7:
            t = 12;  tx = 1;          col = C2();
            break;
        case 8:
            t = 15;   tx = 12;         col = C2();
            break;
        case 9:
            t = 7;   tx = 15;         col = C0();
            break;
        case 10:
            t = 4;  tx = 7;          col = C1();
            break;
        case 11:
            t = 0;   tx = 4;         col = C0();
            break;
        case 12:
            t = 13;   tx = 0;         col = C3();
            break;
        case 13:
            t = 8;   tx = 13;         col = C2();
            break;
        case 14:
            t = 10;   tx = 8;         col = C1();
            break;
        case 15:
            t = 3;  tx = 10;          col = C0();
            break;
            
            
        default:
            break;
    }
    
    t *= factor;
    tx *= factor;
    for (int i=0; i < factor; i++) {
                strip->setPixelColor(t+i, col);
                strip->setPixelColor(tx+i, colx);
    }

    
    
    
}

void quadsparklefill(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, eMoonSmoothness s, colourFunction CX, colourFunction C0, colourFunction C1, colourFunction C2, colourFunction C3) {
    
    
    int t;
    if (f == 1) {
        for (t=0; t < strip->numPixels(); t++) {
            strip->setPixelColor(t, 0);
        }
    }
    
    int stepSize = duration / 32;
    if (f % stepSize) return;

    
    eMoonColour col;

    
    switch (f / stepSize) {
            
        case 0:
            t = 14;
            col = C1();
            break;
        case 1:
            t = 11;
            col = C1();
            break;
        case 2:
            t = 5;
            col = C0();
            break;
        case 3:
            t = 2;
            col = C0();
            break;
        case 4:
            t = 9;
            col = C1();
            break;
        case 5:
            t = 6;
            col = C0();
            break;
        case 6:
            t = 1;            col = C0();
            break;
        case 7:
            t = 12;            col = C1();
            break;
        case 8:
            t = 15;            col = C1();
            break;
        case 9:
            t = 7;            col = C0();
            break;
        case 10:
            t = 4;            col = C0();
            break;
        case 11:
            t = 0;            col = C0();
            break;
        case 12:
            t = 13;            col = C1();
            break;
        case 13:
            t = 8;            col = C1();
            break;
        case 14:
            t = 10;            col = C1();
            break;
        case 15:
            t = 3;            col = C0();
            break;
        case 16:
            t = 16;
            col = C2();
            break;
        case 17:
            t = 27;
            col = C3();
            break;
        case 18:
            t = 25;
            col = C3();
            break;
        case 19:
            t = 18;
            col = C2();
            break;
        case 20:
            t = 20;
            col = C2();
            break;
        case 21:
            t = 24;
            col = C3();
            break;
        case 22:
            t = 17;            col = C2();
            break;
        case 23:
            t = 19;            col = C2();
            break;
        case 24:
            t = 31;            col = C3();
            break;
        case 25:
            t = 26;            col = C3();
            break;
        case 26:
            t = 21;            col = C2();
            break;
        case 27:
            t = 30;            col = C3();
            break;
        case 28:
            t = 23;            col = C2();
            break;
        case 29:
            t = 29;            col = C3();
            break;
        case 30:
            t = 28;            col = C3();
            break;
        case 31:
            t = 22;            col = C2();
            break;
            
            
        default:
            break;
    }
    


        strip->setPixelColor(t, col);

    
    
    
    
}

