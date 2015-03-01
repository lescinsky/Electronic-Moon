//
//  codeTemplates.cpp
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 28/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "codeTemplates.h"


 codeTemplate::codeTemplate()
{
}


void codeTemplate::addChild(codeTemplate* child, std::string token) {
    
    int i = this->numChildren;
    this->childList[i] = child;
    child->token = token;
    child->setup();
    this->numChildren = i+1;

}

void codeTemplate::replaceChild(int i) {
    
    codeTemplate* child = this->childList[i];
    this->replaceString(child->token, child->generate());
}

void codeTemplate::replaceAllChildren() {
    
    for (int i=0; i < this->numChildren; i++) {
        this->replaceChild(i);
    }

}

void codeTemplate::replaceString(std::string token, std::string value) {
    
    std::string target = "?" + token + "?";
    unsigned long l = target.length();
    unsigned long s = this->workingString.find(target);
    if (s != std::string::npos) {
        this->workingString.replace(s, l, value);
    }
    
}

void codeTemplate::replaceString(std::string token, int value) {
    
    std::string valueString = std::to_string(value);
    this->replaceString(token, valueString);
    
}


topLevelTemplate::topLevelTemplate(int lCount, lightshow* lightshowList, int sCount, strip* stripList) :
lCount(lCount), lightshowList(lightshowList), sCount(sCount), stripList(stripList)
{
    
}




//void topLevelTemplate::addChild(lightshowTemplate* child) {
//    child->lightshow
//}
//void addChild(stripTemplate* child);


void lightshowTemplate::addChild(lightshowTemplate* child, std::string token) {
    
    child->parent = this;
    this->codeTemplate::addChild(child, token);
    
}

//void stripTemplate::addChild(stripTemplate* child, std::string token) {
//    
//    child->parent = this;
//    this->codeTemplate::addChild(child, token);
//    
//}

//------------------------------------------------

//  Declaring a Lightshow
//
//      Function Signature
//
//            The function signature is used almost identically in the declaration (H file)
//                    and definition (CPP file).
//            See sigTemplate
//
//      Function Body
//
//            The body of an update function is one line long.
//            See bodyTemplate
//                    bodyTemplate contains colourArgList

//      Colour Functions

//            There are multiple colour functions defined for each update function.
//            These functions are also one line long.
//            Each update function's colour function definitions are printed
//                    just ahead of the update function definition'
//
//  Declaring the Strips
//
//      Strip Declarations
//
//      Strip Setup
//
//  Setting up the Symbolic Lightshows (the Mix List)
//
//      Master Setup


void sigTemplate::setup() {
    
}

std::string sigTemplate::generate() {
    
    this->currentLightshow = this->parent->currentLightshow;

    this->workingString =
    "void ?function?(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)";
    
    
    this->replaceString("function", this->currentLightshow->name);
    return this->workingString;
}

void bodyTemplate::setup() {
    
    this->templateString =
    "{\n    ?basis?(f, duration, strip, ?transition?, ?colourArgList?); }\n";

       this->addChild(new colourArgList(), "colourArgList");
    
    
}

std::string bodyTemplate::generate() {
    
    this->currentLightshow = this->parent->currentLightshow;
    this->workingString = this->templateString;
    
    this->replaceString("basis", this->currentLightshow->updateFunction);
    this->replaceString("transition", this->currentLightshow->transition);
    this->replaceAllChildren();

    return this->workingString;
}

void colourArgList::setup() {
    
    
}

std::string colourArgList::generate() {
    
    this->currentLightshow = this->parent->currentLightshow;

    this->workingString = "&?function?CX";
    
   std::string name = this->currentLightshow->name;
    this->replaceString("function", name);
    
    for (int i=0; i < this->currentLightshow->colourCount; i++) {
        this->workingString += ", &?function?C?i?";
        this->replaceString("function", name);
        this->replaceString("i", i);
    }
    
    return this->workingString;
    
}

void colourFunctionList::setup() {
    
}

std::string colourFunctionList::generate() {
    
    this->currentLightshow = this->parent->currentLightshow;

    std::string baseTemplate = "uint32_t ?function?C?i?() {return(?value?);}\n";
    
    std::string name = this->currentLightshow->name;
    this->workingString = baseTemplate;
    this->replaceString("function", name);
    this->replaceString("i", "X");
    this->replaceString("value", this->currentLightshow->CX);
    
    for (int i=0; i < this->currentLightshow->colourCount; i++) {
        this->workingString += baseTemplate;
        this->replaceString("function", name);
        this->replaceString("i", i);
        this->replaceString("value", this->currentLightshow->colourArgs[i]);

    }
    return this->workingString;
}

void primitiveLightshowDefinitions::setup() {
    
    this->templateString =
"?colourFunctions?\n\
?signature?\n\
?body?\n\n";
    
    colourFunctionList* colourFunctions = new colourFunctionList();
    sigTemplate* signature = new sigTemplate();
    bodyTemplate* body = new bodyTemplate();
    addChild(colourFunctions, "colourFunctions");
    addChild(signature, "signature");
    addChild(body, "body");
    
}

std::string primitiveLightshowDefinitions::generate() {
    
    
    this->workingString = "";
  

    for (int i=0; i < this->lCount; i++) {
        
        this->workingString += this->templateString;
        currentLightshow = &this->lightshowList[i];
        this->replaceAllChildren();
        
    }
    return this->workingString;
}

