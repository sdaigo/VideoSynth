#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Video synth");
    ofSetWindowShape(1280, 720);
//    ofSetFullscreen(true);
    ofSetFrameRate(60);
    ofBackground(ofColor::white);
    
    // GUI setup
    gui.setup("Parameters", "settings.xml");
    gui.add(countX.setup("countX", 50, 0, 200));
    gui.add(stepX.setup("stepX", 20, 0, 200));
    gui.add(twistX.setup("twistX", 5, -45, 45));
    
    globalGroup.setup("Global");
    globalGroup.add(Scale.setup("Scale", 1, 0.0, 1));
    globalGroup.add(Rotate.setup("Rotate", 0, -180, 180));
    globalGroup.add(Background.setup("Background", 255, 0, 255));
    gui.add(&globalGroup);
    gui.loadFromFile("settings.xml");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    // Windowの中心を座標の中心にする
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    // ----------
    float Scl = pow(Scale, 4.0f);
    ofRotate(Rotate);
    ofScale(Scl, Scl);
    stripePattern();
    // ----------    
    ofPopMatrix();
    
    gui.draw();
}

void ofApp::exit() {
    gui.saveToFile("settings.xml");
}

void ofApp::stripePattern() {
    ofBackground(Background);
    ofSetColor(ofColor::black);
    ofSetLineWidth(1.0);
    ofNoFill();
    
    for(int i = -countX; i < countX; i++) {
        ofPushMatrix();
        ofTranslate(i * stepX, 0);
        ofScale(6, 6);
        ofRotate(i * twistX);
        ofDrawTriangle(0, 0, -50, 100, 50, 100);
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
