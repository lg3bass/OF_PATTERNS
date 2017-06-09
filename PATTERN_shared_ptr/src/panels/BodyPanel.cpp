//
//  BodyPanel.cpp
//  PATTERN_shared_ptr
//
//  Created by Robert White III on 6/8/17.
//
//

#include "BodyPanel.h"
#include "ofApp.h"

ofApp* bMainApp;

//-------------------------------------------------
void BodyPanel::setup(int x, int y, int width, int height, ofBaseApp* appPtr){
    
    bMainApp = dynamic_cast<ofApp*>(appPtr);
    
    _x = x;
    _y = y;
    _w = width;
    _h = height;
    
    //colors
    setBackgroundColor(ofColor::darkGray);
    setBorderColor(ofColor::mediumOrchid);
    setBorderWidth(2);

}

//-------------------------------------------------
void BodyPanel::update(){
    
    
}

//-------------------------------------------------
void BodyPanel::draw(){
    
    drawPanel();
    
}

//-------------------------------------------------
void BodyPanel::keyPressed(int key){
    
    ofLog() << "BODY";
    
}

//-------------------------------------------------
void BodyPanel::mousePressed(int x, int y, int button){
    if(y > _y && y < _y+_h){
        ofLog() << "body pressed";
        setBackgroundColor(ofColor::yellow);
        
        bMainApp->myAppData.selected_panel_name = "BODY";
        bMainApp->myAppData.txt_color = ofColor::darkKhaki;
    }
    
    
}

//-------------------------------------------------
void BodyPanel::mouseReleased(int x, int y, int button){

    ofLog() << "body released";
    setBackgroundColor(ofColor::darkGray);

    
}

//-------------------------------------------------


//-------------------------------------------------
