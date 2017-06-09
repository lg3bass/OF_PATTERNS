#pragma once

#include "ofMain.h"

//panels
#include "HeaderPanel.h"
#include "BodyPanel.h"
#include "FooterPanel.h"

#define HEADER_PANEL_HEIGHT 0.2
#define BODY_PANEL_HEIGHT 0.6
#define FOOTER_PANEL_HEIGHT 0.2


struct appData {
    string selected_panel_name;
    ofColor txt_color;
};


class ofApp : public ofBaseApp{

	public:
    
        appData myAppData;
    
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        //panels
        HeaderPanel headerPanel;
        BodyPanel bodyPanel;
        FooterPanel footerPanel;
    
        ofTrueTypeFont	verdana30;
		
};
