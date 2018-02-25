#include "ofApp.h"
#include "dot.h"
#include "block.h"


void ofApp::setup(){
	ofBackground(23, 20, 34);
	dotOne = dot_construct(400, 50, 10, ofColor(176, 200, 150));
	blockOne = block_construct(30, 60, 100, 100, ofColor(0, 204, 204));
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	dot_draw(dotOne);
	block_draw(blockOne);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	block_control(key, blockOne);

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
