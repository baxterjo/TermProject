#include "ofApp.h"
#include "spaceship.h"
#include "star.h"


void ofApp::setup() {
	grayShip.load("ship.png");
	ofBackground(0, 0, 0);
	shipOne = construct_ship(ofGetWidth() / 2, ofGetHeight() - 250, ofGetWidth() / 7, ofGetHeight() / 5);
	star_field = (struct star**) malloc(sizeof(struct star*) * 300);
	for (int i = 0; i < 301; ++i) {
		star_field[i] = construct_star(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), ofRandom(50, 255));
	}
}

//--------------------------------------------------------------
void ofApp::update() {
	ship_move(shipOne);
	ship_bob_around(shipOne);
	if (ship_is_at_edge(shipOne)) {
		ship_bounce(shipOne);
	}
	for (int i = 0; i < 301; ++i) {
		move_star(star_field[i]);
		if (star_is_at_bottom(star_field[i])) {
			star_reset(star_field[i]);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i = 0; i < 301; ++i) {
		draw_star(star_field[i]);
	}
	ship_draw(shipOne, grayShip);
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
