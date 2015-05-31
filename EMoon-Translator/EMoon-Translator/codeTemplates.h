//
//  codeTemplates.h
//  EMoon-Translator
//
//  Created by Gordon Lescinsky on 28/02/2015.
//  Copyright (c) 2015 Gordon Lescinsky. All rights reserved.
//

#ifndef __EMoon_Translator__codeTemplates__
#define __EMoon_Translator__codeTemplates__

#include <stdio.h>
#include <stdio.h>
#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <map>

#include "parsing.h"

typedef std::map<std::string, std::string> dataBundle;

class codeTemplate {
    
public:
    // Constructors
    
    // Creates an empty bundle
    codeTemplate();
    
    // method for output
    virtual std::string generate();

    
    // The token that this template will replace
    std::string token;
    
    void setTemplateString(std::string templateString);
    
    // Create specific kinds of bundles
//    codeTemplate(lightshow* lightshow);
//    codeTemplate(colourType colour, int index);
//    codeTemplate(strip* strip);
    
    // Use another template's bundle
//    codeTemplate(dataBundle* bundle);
    
    // Creates list of templates with specific kinds of bundles
//    codeTemplate(lightshow* lsList, int lsCount);
//    codeTemplate(strip* sList, int sCount);
//    codeTemplate(colourType* cList, int cCount);

protected:
    // The string that is used to initialise the working string
    std::string templateString;
    
    // data for the bundle
    dataBundle bundle;
    
    // methods for setting up the bundle
    void addToBundle(std::string token, std::string text);
    void addToBundle(std::string token, int number);
//    void setBundle(colourType colour);
    
    // data for the children
    int numChildren;
    codeTemplate* childList[20];
    
    // methods for setting up the children
    void addChild(codeTemplate* child, std::string token);
    void addChild(int index, codeTemplate* child, std::string token);

    
    // data for the list
    int numTemplates;
    codeTemplate* templateList[256];
    
    // method for setting up the list
    void addTemplate(codeTemplate* instance, std::string token);

    void setTemplateStringAllChildren(std::string templateString);
    void setTemplateStringAllChildren();



    // data for replacing tokens in the templage
    std::string workingString;
    
    // methods for replacing the bundle
    void replaceString(std::string token, std::string value);
    void replaceString(std::string token, int value);
    void autoReplaceBundle();
    
    //methods for replacing the child templates
    void replaceChild(int index);
    void replaceAllChildren();
    
    //methods for replacing the instances in the list
    void replaceInstance(int index);
    
    std::string generateAllChildren();
    std::string generateAllTemplates();


};

//-------------------- DERIVED CLASSES ----------------------------


//      Lightshow
class lightshowTemplate : public codeTemplate {

public:
    lightshowTemplate(lightshow* ls);
protected:
    void setBundle(lightshow* lightshow);
};


//      Strip
class stripTemplate : public codeTemplate {
public:
    stripTemplate(strip* strip);
protected:
    void setBundle(strip* strip);
};


//      Colour
class colourTemplate : public codeTemplate {
public:
    colourTemplate(colourType colour, int index);
};


//      Lightshow List

class lightshowListTemplate : public codeTemplate {
public:
    
    lightshowListTemplate(lightshow* lsList, int lsCount);
    
};


//      Colour List
class colourListTemplate : public lightshowTemplate {
public:
    
    colourListTemplate(lightshow* ls);
    
};


//      Strip List
class stripListTemplate : public codeTemplate {
public:
    
    stripListTemplate(strip* sList, int sCount);
    
};



//-------------------------------------------------


//      Operational Code Templates


//--------------------------------------------------

class sigTemplate : public lightshowTemplate {
public:
    sigTemplate(lightshow* ls);

};

class bodyTemplate : public lightshowTemplate {
public:
    bodyTemplate(lightshow* ls);
};


class colourFunctionList : public lightshowTemplate {
public:
    colourFunctionList(lightshow* ls);
};



class primitiveLightshowDefinitions : public lightshowListTemplate {
public:
    primitiveLightshowDefinitions(lightshow* lsList, int lCount);
};

//class primitiveStripDefinitions : public listTemplate {
//public:
//    primitiveStripDefinitions(moonChunk* inputD);
//    std::string generate();
//};
//
//class stripDefinitionTemplate : public codeTemplate {
//public:
//    std::string generate();
//};
//
//class stripSetupTemplate : public codeTemplate {
//public:
//    std::string generate();
//};



#endif /* defined(__EMoon_Translator__codeTemplates__) */
