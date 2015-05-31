//
//  codeTemplates.cpp
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 28/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#include "codeTemplates.h"

// Code Templates
//      have bundles and children and lists
//      bundles allow simple token to data replacement
//      children allow token to template replacement
//      lists allow a token to be replaced by a list of templates
//
//  Templates will form a tree
//  Leaf nodes will replace tokens with data from the bundle
//
//  For a variety of one-off sub-templates, use children
//  For indeterminate number of repeated templates, use the list
//  For a variety of lists, create a child with a list
//  If both a list and a bundle exist, or a list and children, then bundle and children repeat!!!!
//
//  When a codeTemplate is constructed, it still doesn't have its token
//  A codeTemplate is generally constructed by another template, in that template's constructor
//
// All codeTemplate classes should have their own constructors
// A base class object has no template string so it generates nothing!!!
//
//  !!! I should hide templateString and force user to set it with a method

void codeTemplate::addToBundle(std::string token, std::string text) {
    
    this->bundle[token] = text;

    
}

void codeTemplate::addToBundle(std::string token, int number) {
    
    this->addToBundle(token, std::to_string(number));
    
}

codeTemplate::codeTemplate() :
    numChildren(0), numTemplates(0)
{
}

//codeTemplate::codeTemplate(dataBundle* bundle) :
//    numChildren(0), numTemplates(1) {
//    
//}



lightshowTemplate::lightshowTemplate(lightshow* ls) :
codeTemplate::codeTemplate()
{
    this->setBundle(ls);
}

colourTemplate::colourTemplate(colourType colour, int index) :
codeTemplate::codeTemplate()
{
    this->addToBundle("value", colour);
    this->addToBundle("i", index);
}

stripTemplate::stripTemplate(strip* strip) :
    codeTemplate::codeTemplate()
{
    this->setBundle(strip);
}

lightshowListTemplate::lightshowListTemplate(lightshow* lsList, int lCount) :
    codeTemplate::codeTemplate()
{
    this->numTemplates = lCount;
    for (int i =0; i < lCount; i++) {
        lightshowTemplate* newTemplate = new lightshowTemplate(&lsList[i]);
        this->templateList[i] = newTemplate;
    }
}

stripListTemplate::stripListTemplate(strip* sList, int sCount) :
    codeTemplate::codeTemplate()
{
    this->numTemplates = sCount;
    for (int i =0; i < sCount; i++) {
        stripTemplate* newTemplate = new stripTemplate(&sList[i]);
        this->templateList[i] = newTemplate;
    }
}


colourListTemplate::colourListTemplate(lightshow* ls) :
lightshowTemplate(ls)
{
    this->numTemplates = ls->colourCount;
    for (int i =0; i < ls->colourCount; i++) {
        colourTemplate* newTemplate = new colourTemplate(ls->colourArgs[i], i);
        this->templateList[i] = newTemplate;
    }
}


// set up data bundle for lightshows
void lightshowTemplate::setBundle(lightshow* ls) {
    
    this->bundle.clear();
    addToBundle("name", ls->name);
    addToBundle("transition", ls->transition);
    addToBundle("CX", ls->CX);
    addToBundle("colourCount", ls->colourCount);
    addToBundle("updateFunction", ls->updateFunction);
//    addChild(new ColourListTemplate(ls->colourArgs, ls->colourCount), "colourArgs");
    
}




// set up data bundle for strips
void stripTemplate::setBundle(strip* strip)
{
    //!! rewrite using addToBundle
    this->bundle.clear();
    bundle["name"] = strip->name;
    bundle["pin"] = strip->pin;
    bundle["count"] = strip->count;
}


// replaces a token in the bundle with the matching data
void codeTemplate::replaceString(std::string token, std::string value) {
    
    std::string target = "?" + token + "?";
    unsigned long l = target.length();
    unsigned long s = this->workingString.find(target);
    if (s != std::string::npos) {
        this->workingString.replace(s, l, value);
    }
    
}


// replaces all tokens in the bundle with matching data
void codeTemplate::autoReplaceBundle() {

        for (auto  iterator = bundle.begin(); iterator != bundle.end(); iterator++) {
            std::string token = iterator->first;
            std::string value = iterator->second;
            this->replaceString(iterator->first, iterator->second);
        }

}


void codeTemplate::addChild(codeTemplate* child, std::string token) {
    
    int i = this->numChildren;
    child->token = token;
    this->childList[i] = child;
    this->numChildren = i+1;
    
}

// replaces the child token with the output of the child template
void codeTemplate::replaceChild(int i) {
    
    codeTemplate* child = this->childList[i];
        this->replaceString(child->token, child->generate());
}

std::string codeTemplate::generateAllChildren() {
    std::string outputString = "";
    for (int i=0; i < this->numChildren; i++) {
        outputString += this->childList[i]->generate();    }
    return outputString;
}

// replaces all child tokens with outputs of child templates
void codeTemplate::replaceAllChildren() {
    
    for (int i=0; i < this->numChildren; i++) {
        this->replaceChild(i);
    }
    
}

void codeTemplate::addChild(int index, codeTemplate* child, std::string token) {
    
    this->templateList[index]->addChild(child, token);
    
}

// replaces an instance template's token with the output of one of the instance templates
void codeTemplate::replaceInstance(int i) {
    
    codeTemplate* instance = this->templateList[i];
        this->replaceString(instance->token, instance->generate());
}
    
    
std::string codeTemplate::generateAllTemplates() {
    std::string outputString = "";
    for (int i=0; i < this->numTemplates; i++) {
        outputString += this->templateList[i]->generate();    }
    return outputString;
}


void codeTemplate::setTemplateString(std::string templateString) {
    this->templateString = templateString;
    setTemplateStringAllChildren();
}

void codeTemplate::setTemplateStringAllChildren(std::string templateString) {
    
    for (int i=0; i < this->numTemplates; i++) {
        this->templateList[i]->templateString = templateString;
    }
}

void codeTemplate::setTemplateStringAllChildren() {
    setTemplateStringAllChildren(this->templateString);
}

std::string codeTemplate::generate() {
  

    if (this->templateString.length()) {
            this->workingString = this->templateString;
        this->autoReplaceBundle();
        this->replaceAllChildren();
        for (int i=0; i < this->numTemplates; i++) {
            this->workingString += this->templateString;
            this->autoReplaceBundle();
            this->replaceAllChildren();
            this->replaceInstance(i);
        }
    }
    else {
        this->workingString = "";
        this->workingString += this->generateAllChildren();
        this->workingString += this->generateAllTemplates();
    }
    return this->workingString;
    
}




//void listTemplate::addChild(listTemplate* child, std::string token) {
//    child->parent = this;
//    this->codeTemplate::addChild(child, token);
//}



//void lightshowTemplate::addChild(lightshowTemplate* child, std::string token) {
//    
//    child->parent = this;
//    this->codeTemplate::addChild(child, token);
//    
//}
//
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



sigTemplate::sigTemplate(lightshow* ls) :
    lightshowTemplate(ls)
{
    
//    this->currentLightshow = this->parent->currentLightshow;

    this->templateString =
    "void ?updateFunction?(eMoonFrame f, eMoonFrame duration, Adafruit_NeoPixel* strip)";

}

bodyTemplate::bodyTemplate(lightshow* ls) :
    lightshowTemplate(ls)
{
    
    this->templateString =
    "{\n    ?updateFunction?(f, duration, strip, ?transition?, ?CX??colourArgList?); }\n";

    colourListTemplate* colourArgList = new colourListTemplate(ls);
    colourArgList->setTemplateString(", &?updateFunction?C?i?");
    addChild(colourArgList, "colourArgList");

    
    
}

//std::string bodyTemplate::generate() {
//    
//    this->currentLightshow = this->parent->currentLightshow;
//    this->workingString = this->templateString;
//    
//    this->replaceString("basis", this->currentLightshow->updateFunction);
//    this->replaceString("transition", this->currentLightshow->transition);
//    this->replaceAllChildren();
//
//    return this->workingString;
//}



colourFunctionList::colourFunctionList(lightshow* ls) :
lightshowTemplate(ls)
{
    
    std::string CXline = "uint32_t ?updateFunction?CX() {return(?CX?);}\n?colourFunctionsI?\n";
    std::string CIline = "uint32_t ?updateFunction?C?i?() {return(?value?);}\n";
    
    this->templateString = CXline + "?colourFunctionsI?\n";
    colourListTemplate* colourFunctionsI = new colourListTemplate(ls);
    colourFunctionsI->setTemplateString(CIline);
    this->addChild(colourFunctionsI, "colourFunctionsI");
}




primitiveLightshowDefinitions::primitiveLightshowDefinitions(lightshow* lsList, int lCount) :
    lightshowListTemplate(lsList, lCount)
{
    
    std::string defTemplateString =
"?colourFunctions?\n\
?signature?\n\
?body?\n\n";
    
    this->setTemplateStringAllChildren(defTemplateString);
    
    for (int i=0; i < lCount; i++) {
        colourFunctionList* colourFunctions = new colourFunctionList(&lsList[i]);
        sigTemplate* signature = new sigTemplate(&lsList[i]);
        bodyTemplate* body = new bodyTemplate(&lsList[i]);
        addChild(i, colourFunctions, "colourFunctions");
        addChild(i, signature, "signature");
        addChild(i, body, "body");
    }
}
//
//std::string primitiveLightshowDefinitions::generate() {
//    
//    
//    this->workingString = "";
//  
//
//    for (int i=0; i < this->lCount; i++) {
//        
//        this->workingString += this->templateString;
//        currentLightshow = &this->lightshowList[i];
//        this->replaceAllChildren();
//        
//    }
//    return this->workingString;
//}
//
//void primitiveStripDefinitions::setup() {
//    this->templateString =
//"?stripDefs?\n\
//?stripSetup?\n\n";
//    
//    stripDefinitionTemplate* stripDefs = new stripDefinitionTemplate();
//    stripSetupTemplate* stripSetup = new stripSetupTemplate();
//    addChild(stripDefs, "stripDefs");
//    addChild(stripSetup, "stripSetup");
//}
//
//std::string primitiveStripDefinitions::generate() {
//    
//    this->currentStrip = this->parent->currentStrip;
//    
//    std::string baseTemplate = "Adafruit_NeoPixel* ?strip? = new Adafruit_NeoPixel(?length?, ?pin?, NEO_GRB + NEO_KHZ800);\n";
//    
//    for (int i=0; i < this->sCount; i++) {
//        
//        this->workingString += this->templateString;
//        currentLightshow = &this->lightshowList[i];
//        this->replaceAllChildren();
//        
//    }
//    
//    return this->workingString;
//}

