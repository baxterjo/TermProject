#include "ofApp.h"
#include "spaceship.h"


void ofApp::setup(){
	ofBackground(23, 20, 34);
	shipOne = construct_ship(ofGetWidth() / 2, ofGetHeight() - 200, 100, 200, ofColor(240, 250, 50));
}

//--------------------------------------------------------------
void ofApp::update(){
	ship_move(shipOne);
	if (ship_is_at_edge(shipOne)) {
		ship_bounce(shipOne);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ship_draw(shipOne);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'a') {
		ship_thrust_left(shipOne);
	}
	else if (key == 'd') {
		ship_thrust_right(shipOne);
	}

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
