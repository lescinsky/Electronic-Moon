//
//  autocode.cpp
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 28/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "autocode.h"

//---------------------------------------------------------------------------------

//Generate Lightshow includes
//std::string headerTemplateTop = "Lightshows_header_top.txt";
//std::string headerTemplateEnd = "Lightshows_header_end.txt";
std::string templateFolder = "/Users/gordon/GitHub/Electronic-Moon/EMoon-Translator/EMoon-Translator/";
std::string sourceFolder = "/Users/gordon/GitHub/Electronic-Moon/EMoon-Sketch/EMoon-Sketch/";

const std::string headerTop =
"//  Automatically Generated code  \n\n\
#ifndef __EMoon_Sketch__Lightshows__\n\
#define __EMoon_Sketch__Lightshows__\n\n\
#include <stdio.h>\n\
#include \"EMoonDesign.h\"\n\
#include \"Strips.h\"\n\n\n";

const std::string sourceTop =
"//  Automatically Generated code  \n\n\
#include \"Lightshows.h\"\n\n\n\
extern activePhysicalStripList* APS_list;\n\
extern activePrimitiveLightshowList* APL_list;\n\
extern activeSymbolicLightshowList* mix_list;";


const std::string headerEnd =
"void setupStrips();\
void setupMasterLightshow();\n\n\n\n\
#endif\n";


const std::string sourceEnd = "\n\n\n\n\n";



void generateLightshows(lightshow* lightshowList, int lCount, strip* stripList, int sCount) {
    
    std::string filePath;
    //        std::ifstream infile(filePath) ;
    //        if ( !infile ) {
    //                      std::cout << "file not found!\n" ;
    //            return;
    //        }
    //            std::string fileData( ( std::istreambuf_iterator<char> ( infile ) ) ,
    //                                 std::istreambuf_iterator<char> ( ) ) ;
    //            infile.close( ) ;
    //               std::cout << fileData;
    
    
    
    
    // Start the output files, header and source
    
    filePath = sourceFolder + "lightshows.h";
    std::ofstream outHeader(filePath);
    if ( !outHeader ) {
        std::cout << "Header file not opened!\n" ;
        return;
    }
    
    filePath = sourceFolder + "lightshows.cpp";
    std::ofstream outSource(filePath);
    if ( !outSource ) {
        std::cout << "Source file not opened!\n" ;
        return;
    }
    // Write the top of header and source
    

    
    outHeader <<  headerTop;
    

    
    outSource <<  sourceTop;
 
    
    primitiveLightshowDefinitions* primitiveDefs = new primitiveLightshowDefinitions(lCount, lightshowList, sCount, stripList);
    primitiveDefs->setup();
    std::cout << primitiveDefs->generate();
    
    //-----Insert the lightshows---------
    //  Each lightshow defines a new void function.
    //  The Function signature is used in both header and source.
    std::string masterSetupTemplate =
    "void setupMasterLightshow() {\
    \n?masterAddList?\
    \n}";
    std::string masterAddList;
    
    // Loop through lightshow list
    for (int i=0; i < lCount; i++) {
        
        std::string functionName = lightshowList[i].name;
        std::string duration = std::to_string(lightshowList[i].duration);
        std::string strip = lightshowList[i].strip;
        std::string transition = std::to_string(lightshowList[i].transition);
        std::string basis = lightshowList[i].updateFunction;
        
//        std::string sigTemplate = "void ?function?(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)";
//        sigTemplate.replace(sigTemplate.find("?function?"),10, functionName);
        
//        std::string bodyTemplate = "{\n    ?basis?(f, duration, strip, ?transition?, ?colourArgList?); }\n";
        
        
        
        
//        bodyTemplate.replace(bodyTemplate.find("?basis?"), 7, basis);
//        bodyTemplate.replace(bodyTemplate.find("?transition?"), 12, transition);
//        bodyTemplate.replace(bodyTemplate.find("?colourArgList?"), 15, colourArgList);
        
        std::string mixSetupTemplate = "   //master->addLightshow(?duration?, ?strip?, &?function?);\n";
        mixSetupTemplate.replace(mixSetupTemplate.find("?duration?"),10, duration);
        mixSetupTemplate.replace(mixSetupTemplate.find("?strip?"),7, strip);
        mixSetupTemplate.replace(mixSetupTemplate.find("?function?"),10, functionName);
        
        masterAddList += mixSetupTemplate;
        
//        colourFunctionList* colourFunctions = new colourFunctionList();
//        colourFunctions->lightshow = &lightshowList[i];
//        std::cout << colourFunctions->generate();
//        
//        sigTemplate* signature = new sigTemplate();
//        signature->lightshow = &lightshowList[i];
//        outHeader << signature->generate() << ";\n";
//        std::cout << signature->generate() << "hello world\n";
//        
//        bodyTemplate* body = new bodyTemplate();
//        body->lightshow = &lightshowList[i];
////        outSource << colourFunctionList;
//        outSource << signature->generate() << "\n" << body->generate();
//        std::cout << signature->generate() << body->generate();
        

    }
    
    
    // Write the Strip declarations
    std::string stripDeclList;
    std::string stripSetupTemplate =
    "void setupStrips() {\
    \n?stripAddList?\
    \n}";
    std::string stripAddList;
    
    // Loop through strip list
    for (int i=0; i < sCount; i++) {
        
        std::string stripName = stripList[i].name;
        std::string pin = std::to_string(stripList[i].pin);
        std::string sLength = std::to_string(stripList[i].count);
        
        std::string declTemplate = "Adafruit_NeoPixel* ?strip? = new Adafruit_NeoPixel(?length?, ?pin?, NEO_GRB + NEO_KHZ800);\n";
        declTemplate.replace(declTemplate.find("?strip?"),7, stripName);
        declTemplate.replace(declTemplate.find("?pin?"),5, pin);
        declTemplate.replace(declTemplate.find("?length?"),8, sLength);
        
        std::string stripSetupTemplate = "   APS_list->addStrip(?strip?);\n";
        stripSetupTemplate.replace(stripSetupTemplate.find("?strip?"),7, stripName);
        
        stripDeclList += declTemplate;
        stripAddList += stripSetupTemplate;
        
    }
    stripSetupTemplate.replace(stripSetupTemplate.find("?stripAddList?"),14, stripAddList);
    
    outSource << "\n" << stripDeclList << "\n";
    outSource << "\n" << stripSetupTemplate << "\n";
    std::cout << stripDeclList << stripSetupTemplate;
    
    // Write the master list setup
    masterSetupTemplate.replace(masterSetupTemplate.find("?masterAddList?"),15, masterAddList);
    outSource << "\n" << masterSetupTemplate << "\n";
    std::cout << masterSetupTemplate;
    
    
    // Write the end of header and source
    

    
    outHeader <<  headerEnd;
    outSource <<  sourceEnd;
    
    outHeader.close();
    outSource.close();
    
}
