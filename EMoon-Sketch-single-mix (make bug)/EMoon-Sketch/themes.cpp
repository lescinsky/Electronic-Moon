//
//  themes.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 28/03/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "themes.h"

void masterLightshow(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
    
    int interval = duration / 8;

    int edgeInterval = interval * 2;
    
    
        switch ( f ) {
            case 0:
                APL_list->addLightshow(p, interval, pod0, &a0);
                APL_list->addLightshow(-1, interval, pod1, &a1);
                APL_list->addLightshow(-1, interval, pod2, &a2);
                APL_list->addLightshow(-1, interval, pod3, &a3);
                APL_list->addLightshow(-1, interval, pod4, &a4);
                APL_list->addLightshow(-1, interval, pod5, &a5);
                APL_list->addLightshow(-1, interval, pod6, &a6);
                APL_list->addLightshow(-1, interval, pod7, &a7);
    
                APL_list->addLightshow(-1, interval, pod8, &a0);
                APL_list->addLightshow(-1, interval, pod9, &a1);
                APL_list->addLightshow(-1, interval, pod10, &a2);
                APL_list->addLightshow(-1, interval, pod11, &a3);
                APL_list->addLightshow(-1, interval, pod12, &a4);
                APL_list->addLightshow(-1, interval, pod13, &a5);
                APL_list->addLightshow(-1, interval, pod14, &a6);
                APL_list->addLightshow(-1, interval, pod15, &a7);
    
                APL_list->addLightshow(-1, edgeInterval, edge0, &edgewipe0);
                APL_list->addLightshow(-1, edgeInterval, edge1, &edgewipe1);
                APL_list->addLightshow(-1, edgeInterval, edge2, &edgewipe2);
    
                APL_list->addLightshow(-1, edgeInterval, edge3, &edgewipe0);
                APL_list->addLightshow(-1, edgeInterval, edge4, &edgewipe1);
                APL_list->addLightshow(-1, edgeInterval, edge5, &edgewipe2);
    
                APL_list->addLightshow(-1, edgeInterval, edge6, &edgewipe0);
                APL_list->addLightshow(-1, edgeInterval, edge7, &edgewipe1);
                APL_list->addLightshow(-1, edgeInterval, edge8, &edgewipe2);
    
                APL_list->addLightshow(-1, edgeInterval, edge9, &edgewipe0);
                APL_list->addLightshow(-1, edgeInterval, edge10, &edgewipe1);
                APL_list->addLightshow(-1, edgeInterval, edge11, &edgewipe2);
    
    
                break;
            case 1:
    
                APL_list->addLightshow(p, interval, pod0, &b0);
                APL_list->addLightshow(-1, interval, pod1, &b1);
                APL_list->addLightshow(-1, interval, pod2, &b2);
                APL_list->addLightshow(-1, interval, pod3, &b3);
                APL_list->addLightshow(-1, interval, pod4, &b4);
                APL_list->addLightshow(-1, interval, pod5, &b5);
                APL_list->addLightshow(-1, interval, pod6, &b6);
                APL_list->addLightshow(-1, interval, pod7, &b7);
    
                APL_list->addLightshow(-1, interval, pod8, &b0);
                APL_list->addLightshow(-1, interval, pod9, &b1);
                APL_list->addLightshow(-1, interval, pod10, &b2);
                APL_list->addLightshow(-1, interval, pod11, &b3);
                APL_list->addLightshow(-1, interval, pod12, &b4);
                APL_list->addLightshow(-1, interval, pod13, &b5);
                APL_list->addLightshow(-1, interval, pod14, &b6);
                APL_list->addLightshow(-1, interval, pod15, &b7);
                break;
            case 2:
    
                APL_list->addLightshow(p, interval, pod0, &c0);
                APL_list->addLightshow(-1, interval, pod1, &c1);
                APL_list->addLightshow(-1, interval, pod2, &c2);
                APL_list->addLightshow(-1, interval, pod3, &c3);
                APL_list->addLightshow(-1, interval, pod4, &c4);
                APL_list->addLightshow(-1, interval, pod5, &c5);
                APL_list->addLightshow(-1, interval, pod6, &c6);
                APL_list->addLightshow(-1, interval, pod7, &c7);
    
                APL_list->addLightshow(-1, interval, pod8, &c0);
                APL_list->addLightshow(-1, interval, pod9, &c1);
                APL_list->addLightshow(-1, interval, pod10, &c2);
                APL_list->addLightshow(-1, interval, pod11, &c3);
                APL_list->addLightshow(-1, interval, pod12, &c4);
                APL_list->addLightshow(-1, interval, pod13, &c5);
                APL_list->addLightshow(-1, interval, pod14, &c6);
                APL_list->addLightshow(-1, interval, pod15, &c7);
    
                APL_list->addLightshow(-1, interval, edge0, &edgewipe10);
                APL_list->addLightshow(-1, interval, edge1, &edgewipe11);
                APL_list->addLightshow(-1, interval, edge2, &edgewipe12);
    
                APL_list->addLightshow(-1, interval, edge3, &edgewipe10);
                APL_list->addLightshow(-1, interval, edge4, &edgewipe11);
                APL_list->addLightshow(-1, interval, edge5, &edgewipe12);
    
                APL_list->addLightshow(-1, interval, edge6, &edgewipe10);
                APL_list->addLightshow(-1, interval, edge7, &edgewipe11);
                APL_list->addLightshow(-1, interval, edge8, &edgewipe12);
    
                APL_list->addLightshow(-1, interval, edge9, &edgewipe10);
                APL_list->addLightshow(-1, interval, edge10, &edgewipe11);
                APL_list->addLightshow(-1, interval, edge11, &edgewipe12);
                break;
            case 3:
    
                //yin ynag
                APL_list->addLightshow(p, interval, pod3, &f0);
                APL_list->addLightshow(-1, interval, pod7, &f1);
                APL_list->addLightshow(-1, interval, pod9, &f1);
                APL_list->addLightshow(-1, interval, pod10, &f3);
                APL_list->addLightshow(-1, interval, pod11, &f0);
                APL_list->addLightshow(-1, interval, pod13, &f1);
                APL_list->addLightshow(-1, interval, pod14, &f3);
                APL_list->addLightshow(-1, interval, pod15, &f1);
    
                APL_list->addLightshow(-1, interval, edge0, &f3);
                APL_list->addLightshow(-1, interval, edge1, &f0);
                APL_list->addLightshow(-1, interval, edge2, &f3);
                APL_list->addLightshow(-1, interval, edge3, &f2);
                APL_list->addLightshow(-1, interval, edge4, &f0);
                APL_list->addLightshow(-1, interval, edge5, &f3);
    
    
    
                APL_list->addLightshow(-1, interval, pod0, &h1);
                APL_list->addLightshow(-1, interval, pod1, &h2);
                APL_list->addLightshow(-1, interval, pod2, &h6);
                APL_list->addLightshow(-1, interval, pod4, &h6);
                APL_list->addLightshow(-1, interval, pod5, &h2);
                APL_list->addLightshow(-1, interval, pod6, &h1);
                APL_list->addLightshow(-1, interval, pod8, &h2);
                APL_list->addLightshow(-1, interval, pod12, &h6);
    
                APL_list->addLightshow(-1, interval, edge6, &h6);
                APL_list->addLightshow(-1, interval, edge7, &h2);
                APL_list->addLightshow(-1, interval, edge8, &h2);
                APL_list->addLightshow(-1, interval, edge9, &h2);
                APL_list->addLightshow(-1, interval, edge10, &h6);
                APL_list->addLightshow(-1, interval, edge11, &h6);
    
    
    
                //            APL_list->addLightshow(p, interval, pod0, &d0);
                //            APL_list->addLightshow(-1, interval, pod1, &d1);
                //            APL_list->addLightshow(-1, interval, pod2, &d2);
                //            APL_list->addLightshow(-1, interval, pod3, &d3);
                //            APL_list->addLightshow(-1, interval, pod4, &d4);
                //            APL_list->addLightshow(-1, interval, pod5, &d5);
                //            APL_list->addLightshow(-1, interval, pod6, &d6);
                //            APL_list->addLightshow(-1, interval, pod7, &d7);
                //
                //            APL_list->addLightshow(-1, interval, pod8, &d0);
                //            APL_list->addLightshow(-1, interval, pod9, &d1);
                //            APL_list->addLightshow(-1, interval, pod10, &d2);
                //            APL_list->addLightshow(-1, interval, pod11, &d3);
                //            APL_list->addLightshow(-1, interval, pod12, &d4);
                //            APL_list->addLightshow(-1, interval, pod13, &d5);
                //            APL_list->addLightshow(-1, interval, pod14, &d6);
                //            APL_list->addLightshow(-1, interval, pod15, &d7);
                break;
            case 4:
                APL_list->addLightshow(p, interval, pod0, &e0);
                APL_list->addLightshow(-1, interval, pod1, &e1);
                APL_list->addLightshow(-1, interval, pod2, &e2);
                APL_list->addLightshow(-1, interval, pod3, &e3);
                APL_list->addLightshow(-1, interval, pod4, &e4);
                APL_list->addLightshow(-1, interval, pod5, &e5);
                APL_list->addLightshow(-1, interval, pod6, &e6);
                APL_list->addLightshow(-1, interval, pod7, &e7);
    
                APL_list->addLightshow(-1, interval, pod8, &e0);
                APL_list->addLightshow(-1, interval, pod9, &e1);
                APL_list->addLightshow(-1, interval, pod10, &e2);
                APL_list->addLightshow(-1, interval, pod11, &e3);
                APL_list->addLightshow(-1, interval, pod12, &e4);
                APL_list->addLightshow(-1, interval, pod13, &e5);
                APL_list->addLightshow(-1, interval, pod14, &e6);
                APL_list->addLightshow(-1, interval, pod15, &e7);
    
                APL_list->addLightshow(-1, edgeInterval, edge0, &edgewipe20);
                APL_list->addLightshow(-1, edgeInterval, edge1, &edgewipe21);
                APL_list->addLightshow(-1, edgeInterval, edge2, &edgewipe22);
    
                APL_list->addLightshow(-1, edgeInterval, edge3, &edgewipe20);
                APL_list->addLightshow(-1, edgeInterval, edge4, &edgewipe21);
                APL_list->addLightshow(-1, edgeInterval, edge5, &edgewipe22);
    
                APL_list->addLightshow(-1, edgeInterval, edge6, &edgewipe20);
                APL_list->addLightshow(-1, edgeInterval, edge7, &edgewipe21);
                APL_list->addLightshow(-1, edgeInterval, edge8, &edgewipe22);
    
                APL_list->addLightshow(-1, edgeInterval, edge9, &edgewipe20);
                APL_list->addLightshow(-1, edgeInterval, edge10, &edgewipe21);
                APL_list->addLightshow(-1, edgeInterval, edge11, &edgewipe22);
                break;
            case 5:
                APL_list->addLightshow(p, interval, pod0, &f0);
                APL_list->addLightshow(-1, interval, pod1, &f1);
                APL_list->addLightshow(-1, interval, pod2, &f2);
                APL_list->addLightshow(-1, interval, pod3, &f3);
                APL_list->addLightshow(-1, interval, pod4, &f4);
                APL_list->addLightshow(-1, interval, pod5, &f5);
                APL_list->addLightshow(-1, interval, pod6, &f6);
                APL_list->addLightshow(-1, interval, pod7, &f7);
    
                APL_list->addLightshow(-1, interval, pod8, &f0);
                APL_list->addLightshow(-1, interval, pod9, &f1);
                APL_list->addLightshow(-1, interval, pod10, &f2);
                APL_list->addLightshow(-1, interval, pod11, &f3);
                APL_list->addLightshow(-1, interval, pod12, &f4);
                APL_list->addLightshow(-1, interval, pod13, &f5);
                APL_list->addLightshow(-1, interval, pod14, &f6);
                APL_list->addLightshow(-1, interval, pod15, &f7);
                break;
            case 6:
                APL_list->addLightshow(p, interval, pod0, &g0);
                APL_list->addLightshow(-1, interval, pod1, &g1);
                APL_list->addLightshow(-1, interval, pod2, &g2);
                APL_list->addLightshow(-1, interval, pod3, &g3);
                APL_list->addLightshow(-1, interval, pod4, &g4);
                APL_list->addLightshow(-1, interval, pod5, &g5);
                APL_list->addLightshow(-1, interval, pod6, &g6);
                APL_list->addLightshow(-1, interval, pod7, &g7);
    
                APL_list->addLightshow(-1, interval, pod8, &g0);
                APL_list->addLightshow(-1, interval, pod9, &g1);
                APL_list->addLightshow(-1, interval, pod10, &g2);
                APL_list->addLightshow(-1, interval, pod11, &g3);
                APL_list->addLightshow(-1, interval, pod12, &g4);
                APL_list->addLightshow(-1, interval, pod13, &g5);
                APL_list->addLightshow(-1, interval, pod14, &g6);
                APL_list->addLightshow(-1, interval, pod15, &g7);
    
                APL_list->addLightshow(-1, interval, edge0, &g7);
                APL_list->addLightshow(-1, interval, edge1, &g6);
                APL_list->addLightshow(-1, interval, edge2, &g1);
    
                APL_list->addLightshow(-1, interval, edge3, &g4);
                APL_list->addLightshow(-1, interval, edge4, &g3);
                APL_list->addLightshow(-1, interval, edge5, &g3);
    
                APL_list->addLightshow(-1, interval, edge6, &g2);
                APL_list->addLightshow(-1, interval, edge7, &g0);
                APL_list->addLightshow(-1, interval, edge8, &g7);
    
                APL_list->addLightshow(-1, interval, edge9, &g1);
                APL_list->addLightshow(-1, interval, edge10, &g3);
                APL_list->addLightshow(-1, interval, edge11, &g7);
                break;
            case 7:
                APL_list->addLightshow(p, interval, pod0, &h0);
                APL_list->addLightshow(-1, interval, pod1, &h1);
                APL_list->addLightshow(-1, interval, pod2, &h2);
                APL_list->addLightshow(-1, interval, pod3, &h3);
                APL_list->addLightshow(-1, interval, pod4, &h4);
                APL_list->addLightshow(-1, interval, pod5, &h5);
                APL_list->addLightshow(-1, interval, pod6, &h6);
                APL_list->addLightshow(-1, interval, pod7, &h7);
    
                APL_list->addLightshow(-1, interval, pod8, &h0);
                APL_list->addLightshow(-1, interval, pod9, &h1);
                APL_list->addLightshow(-1, interval, pod10, &h2);
                APL_list->addLightshow(-1, interval, pod11, &h3);
                APL_list->addLightshow(-1, interval, pod12, &h4);
                APL_list->addLightshow(-1, interval, pod13, &h5);
                APL_list->addLightshow(-1, interval, pod14, &h6);
                APL_list->addLightshow(-1, interval, pod15, &h7);
    
                APL_list->addLightshow(-1, interval, edge0, &edgewipe30);
                APL_list->addLightshow(-1, interval, edge1, &edgewipe31);
                APL_list->addLightshow(-1, interval, edge2, &edgewipe31);
                
                APL_list->addLightshow(-1, interval, edge3, &edgewipe30);
                APL_list->addLightshow(-1, interval, edge4, &edgewipe32);
                APL_list->addLightshow(-1, interval, edge5, &edgewipe30);
                
                APL_list->addLightshow(-1, interval, edge6, &edgewipe31);
                APL_list->addLightshow(-1, interval, edge7, &edgewipe30);
                APL_list->addLightshow(-1, interval, edge8, &edgewipe31);
                
                APL_list->addLightshow(-1, interval, edge9, &edgewipe31);
                APL_list->addLightshow(-1, interval, edge10, &edgewipe31);
                APL_list->addLightshow(-1, interval, edge11, &edgewipe32);
                
                break;
                
            default:
                break;
        }

    
        
    }