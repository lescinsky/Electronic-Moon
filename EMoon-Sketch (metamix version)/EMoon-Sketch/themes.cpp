////
////  themes.cpp
////  EMoon-Sketch
////
////  Created by Gordon Lescinsky on 28/03/2015.
////  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
////
//
//#include "themes.h"
//
//void blueTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    
//    int interval = duration / 2;
//    if (f < duration / 2) {
//    APL_list->addLightshow(p, interval, pod0, &gordon2);
//    APL_list->addLightshow(-1, interval, pod1, &f1);
//    APL_list->addLightshow(-1, interval, pod2, &f2);
//    APL_list->addLightshow(-1, interval, pod3, &f3);
//    APL_list->addLightshow(-1, interval, pod4, &f4);
//    APL_list->addLightshow(-1, interval, pod5, &f5);
//    APL_list->addLightshow(-1, interval, pod6, &f6);
//    APL_list->addLightshow(-1, interval, pod7, &f7);
//    }
//    if (f >= duration/2) {
//        APL_list->addLightshow(p, interval, pod0, &e0);
//        APL_list->addLightshow(-1, interval, pod1, &e1);
//        APL_list->addLightshow(-1, interval, pod2, &e2);
//        APL_list->addLightshow(-1, interval, pod3, &e3);
//        APL_list->addLightshow(-1, interval, pod4, &e4);
//        APL_list->addLightshow(-1, interval, pod5, &e5);
//        APL_list->addLightshow(-1, interval, pod6, &e6);
//        APL_list->addLightshow(-1, interval, pod7, &e7);
//    }
////    APL_list->addLightshow(-1, interval, pod8, &f0);
////    APL_list->addLightshow(-1, interval, pod9, &f1);
////    APL_list->addLightshow(-1, interval, pod10, &f2);
////    APL_list->addLightshow(-1, interval, pod11, &f3);
////    APL_list->addLightshow(-1, interval, pod12, &f4);
////    APL_list->addLightshow(-1, interval, pod13, &f5);
////    APL_list->addLightshow(-1, interval, pod14, &f6);
////    APL_list->addLightshow(-1, interval, pod15, &f7);
//    
//}
//
//
//
//void yellowTheme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 2;
////    APL_list->addLightshow(p, interval, pod0, &h0);
////    APL_list->addLightshow(-1, interval, pod1, &h1);
////    APL_list->addLightshow(-1, interval, pod2, &h2);
////    APL_list->addLightshow(-1, interval, pod3, &h3);
////    APL_list->addLightshow(-1, interval, pod4, &h4);
////    APL_list->addLightshow(-1, interval, pod5, &h5);
////    APL_list->addLightshow(-1, interval, pod6, &h6);
////    APL_list->addLightshow(-1, interval, pod7, &h7);
//    APL_list->addLightshow(p, interval, pod8, &gordon2);
//    APL_list->addLightshow(-1, interval, pod9, &h1);
//    APL_list->addLightshow(-1, interval, pod10, &h2);
//    APL_list->addLightshow(-1, interval, pod11, &h3);
//    APL_list->addLightshow(-1, interval, pod12, &h4);
//    APL_list->addLightshow(-1, interval, pod13, &h5);
//    APL_list->addLightshow(-1, interval, pod14, &h6);
//    APL_list->addLightshow(-1, interval, pod15, &h7);
//    
//    if (f >= duration/2) {
////        mix_list->addLightshow(p, interval, NULL, &bordertest0Theme);
////        mix_list->addLightshow(-1, interval, NULL, &border1Theme);
//
////        APL_list->addLightshow(-1, interval, edge0, &edgewipe10);
////        APL_list->addLightshow(-1, interval, edge1, &edgewipe11);
////        APL_list->addLightshow(-1, interval, edge2, &edgewipe12);
//        
//        APL_list->addLightshow(-1, interval, edge3, &edgewipe10);
//        APL_list->addLightshow(-1, interval, edge4, &edgewipe11);
//        APL_list->addLightshow(-1, interval, edge5, &edgewipe12);
//        
//        APL_list->addLightshow(-1, interval, edge6, &edgewipe10);
//        APL_list->addLightshow(-1, interval, edge7, &edgewipe11);
//        APL_list->addLightshow(-1, interval, edge8, &edgewipe12);
//        
//        APL_list->addLightshow(-1, interval, edge9, &edgewipe10);
//        APL_list->addLightshow(-1, interval, edge10, &edgewipe11);
//        APL_list->addLightshow(-1, interval, edge11, &edgewipe12);
//    }
//    
//    
//}
//
//void bordertest0Theme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration / 2;
//    mix_list->addLightshow(p, interval, NULL, &border0Theme);
//    mix_list->addLightshow(-1, interval, NULL, &border2Theme);
//
//    
//}
//
//void border0Theme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration;
//APL_list->addLightshow(-1, interval, edge0, &gordon2);
//    
//}
//
//void border1Theme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration;
//    APL_list->addLightshow(-1, interval, edge1, &gordon2);
//    
//}
//
//void border2Theme(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip, int p) {
//    int interval = duration;
//    APL_list->addLightshow(-1, interval, edge2, &edgewipe0);
//    
//}