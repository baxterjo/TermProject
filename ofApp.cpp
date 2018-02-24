#include "ofApp.h"
#include "dot.h"
#include "block.h"


void ofApp::setup(){
	ofBackground(23, 20, 34);
	brownDot = dot_construct(400, 0, 10, ofColor(176, 200, 150));
	blackBlock = block_construct(30, 60, 100, 100, ofColor(0, 0, 0));
}

//--------------------------------------------------------------
void ofApp::update(){
	dot_move_down(brownDot);
	dot_grow(brownDot);
}

//--------------------------------------------------------------
void ofApp::draw(){
	dot_draw(brownDot);
	block_draw(blackBlock);
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
