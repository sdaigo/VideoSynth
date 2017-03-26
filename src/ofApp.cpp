#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Video synth");
    ofSetWindowShape(1280, 720);
//    ofSetFullscreen(true);
    ofSetFrameRate(60);
    ofBackground(ofColor::white);
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
    stripePattern();
    // ----------    
    ofPopMatrix();
}

void ofApp::stripePattern() {
    ofSetColor(ofColor::black);
    ofSetLineWidth(1.0);
    ofNoFill();
    
    for(int i = -50; i < 50; i++) {
        ofPushMatrix();
        ofTranslate(i * 20, 0);
        ofRotate(i * 5);
//        ofDrawLine(0, -100, 0, 100);
        ofScale(6, 6);
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
