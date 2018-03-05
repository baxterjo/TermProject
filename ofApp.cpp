#include "ofApp.h"
#include "spaceship.h"
#include "star.h"


void ofApp::setup() {
	grayShip.load("ship.png");
	ofBackground(0, 0, 0);
	shipOne = construct_ship(ofGetWidth() / 2, ofGetHeight() - 250, ofGetWidth() / 7, ofGetHeight() / 5);
	star = construct_star(ofGetWidth() / 2, 0, 200);
}

//--------------------------------------------------------------
void ofApp::update() {
	ship_move(shipOne);
	ship_bob_around(shipOne);
	if (ship_is_at_edge(shipOne)) {
		ship_bounce(shipOne);
	}
	if (star_is_at_bottom(star)){
		star_reset(star);
}
	move_star(star);
}

//--------------------------------------------------------------
void ofApp::draw(){
	ship_draw(shipOne, grayShip);
	draw_star(star);
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
