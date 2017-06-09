//
//  HeaderPanel.cpp
//  PATTERN_shared_ptr
//
//  Created by Robert White III on 6/8/17.
//
//

#include "HeaderPanel.h"
#include "ofApp.h"

ofApp* hMainApp;

//-------------------------------------------------
void HeaderPanel::setup(int x, int y, int width, int height, ofBaseApp *appPtr){
    
    hMainApp = dynamic_cast<ofApp*>(appPtr);
    
    _x = x;
    _y = y;
    _w = width;
    _h = height;

    //colors
    setBackgroundColor(ofColor::darkGray);
    setBorderColor(ofColor::red);
    setBorderWidth(2);
    
}

//-------------------------------------------------
void HeaderPanel::update(){
   
    
}

//-------------------------------------------------
void HeaderPanel::draw(){
    
    drawPanel();
    
}

//-------------------------------------------------
void HeaderPanel::keyPressed(int key){
    
    ofLog() << "HEADER";
    
}

//-------------------------------------------------
void HeaderPanel::mousePressed(int x, int y, int button){
    if(y < _h){
        ofLog() << "header pressed";
        setBackgroundColor(ofColor::purple);
        
        hMainApp->myAppData.selected_panel_name = "HEADER";
        hMainApp->myAppData.txt_color = ofColor::purple;
    }

}

//-------------------------------------------------
void HeaderPanel::mouseReleased(int x, int y, int button){

    ofLog() << "header released";
    setBackgroundColor(ofColor::darkGray);

    
}

//-------------------------------------------------


//-------------------------------------------------
