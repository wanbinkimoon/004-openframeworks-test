#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  sound.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
  sound.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//  for (unsigned int i = 0; i < 8; i++) {
//    int radius = sound.scaledVol * (100 * i);
//    ofSetColor(200, 20 * i);
//    ofSetCircleResolution(3 + (2 * i));
//    ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, radius);
//  }
  
  
  if(sound.scaledVol > 0){
    for (unsigned int i = 10; i < 100; i += 10) {
      ofSetColor(200, 20 * (i / 10));
      ofBeginShape();
      ofSetCurveResolution(i);
      int sides = ofMap(sound.scaledVol, 0, 1, 36, 360);
      for (unsigned int j = 0; j < 360; j += sides) {
        int soundImpact = sound.scaledVol * (100 * i);
        int radius = ofMap(soundImpact, 0, 1000, 0, ofGetHeight() / 2);
        int x = (ofGetHeight() / 2) + radius * cos(j);
        int y = (ofGetHeight() / 2) + radius * sin(j);
        ofCurveVertex(x, y);
      }
      ofEndShape();
    }
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
