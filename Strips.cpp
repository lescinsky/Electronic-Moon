//
//  Strips.cpp
//  EMoon-Sketch
//
//  Created by Gordon Lescinsky on 5/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "Strips.h"
#include "network.h"

// Add the DEMUX_BIT to the pin # to put the pod on the demux network
// Otherwise the pod will be on the default network

// row 0
Adafruit_NeoPixel* pod0 = new Adafruit_NeoPixel(32, 0 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod1 = new Adafruit_NeoPixel(32, 1 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod2 = new Adafruit_NeoPixel(32, 2 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod3 = new Adafruit_NeoPixel(32, 3 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);

// row 1
Adafruit_NeoPixel* pod4 = new Adafruit_NeoPixel(32, 4 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod5 = new Adafruit_NeoPixel(32, 5 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod6 = new Adafruit_NeoPixel(32, 6 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod7 = new Adafruit_NeoPixel(32, 7 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);

// row 2
Adafruit_NeoPixel* pod8 = new Adafruit_NeoPixel(32, 8 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod9 = new Adafruit_NeoPixel(32, 9 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod10 = new Adafruit_NeoPixel(32, 10 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod11 = new Adafruit_NeoPixel(32, 11 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);

// row 3
Adafruit_NeoPixel* pod12 = new Adafruit_NeoPixel(32, 12 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod13 = new Adafruit_NeoPixel(32, 13 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod14 = new Adafruit_NeoPixel(32, 14 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* pod15 = new Adafruit_NeoPixel(32, 15 + DEMUX_BIT, NEO_GRB + NEO_KHZ800);


Adafruit_NeoPixel* edge0 = new Adafruit_NeoPixel(24, EDGEPIN_0, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge1 = new Adafruit_NeoPixel(24, EDGEPIN_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge2 = new Adafruit_NeoPixel(24, EDGEPIN_2, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* edge3 = new Adafruit_NeoPixel(24, EDGEPIN_3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge4 = new Adafruit_NeoPixel(24, EDGEPIN_4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge5 = new Adafruit_NeoPixel(24, EDGEPIN_5, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* edge6 = new Adafruit_NeoPixel(24, EDGEPIN_6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge7 = new Adafruit_NeoPixel(24, EDGEPIN_7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge8 = new Adafruit_NeoPixel(24, EDGEPIN_8, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* edge9 = new Adafruit_NeoPixel(24, EDGEPIN_9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge10 = new Adafruit_NeoPixel(24, EDGEPIN_10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel* edge11 = new Adafruit_NeoPixel(24, EDGEPIN_11, NEO_GRB + NEO_KHZ800);




void setupStrips() {
    
    APS_list->addStrip(pod0);
    APS_list->addStrip(pod1);
    APS_list->addStrip(pod2);
    APS_list->addStrip(pod3);
    APS_list->addStrip(pod4);
    APS_list->addStrip(pod5);
    APS_list->addStrip(pod6);
    APS_list->addStrip(pod7);
    APS_list->addStrip(pod8);
    APS_list->addStrip(pod9);
    APS_list->addStrip(pod10);
    APS_list->addStrip(pod11);
    APS_list->addStrip(pod12);
    APS_list->addStrip(pod13);
    APS_list->addStrip(pod14);
    APS_list->addStrip(pod15);

    APS_list->addStrip(edge0);
    APS_list->addStrip(edge1);
    APS_list->addStrip(edge2);
    APS_list->addStrip(edge3);
    APS_list->addStrip(edge4);
    APS_list->addStrip(edge5);
    APS_list->addStrip(edge6);
    APS_list->addStrip(edge7);
    APS_list->addStrip(edge8);
    APS_list->addStrip(edge9);
    APS_list->addStrip(edge10);
    APS_list->addStrip(edge11);
    
    
    
    
}

