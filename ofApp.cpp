#include "ofApp.h"


void ofApp::setup() {
	ofSetFrameRate(60);
	ship.load("ship.png");
	laserImage.load("laser.png");
	ofBackground(0, 0, 0);
	shipOne = construct_ship(ofGetWidth() / 2, ofGetHeight() - 250, ofGetWidth() / 7, ofGetHeight() / 5);
	star_field = (struct star**) malloc(sizeof(struct star*) * 300);
	for (int i = 0; i < 300; ++i) {
		star_field[i] = construct_star(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), ofRandom(50, 255));
	}
	laser_mag = (struct laser**) malloc(sizeof(struct laser*) * 25);
	for (int i = 0; i < 25; ++i) {
		laser_mag[i] = construct_laser(get_ship_h(shipOne)/3, get_ship_w(shipOne) / 5);
	}
}

//--------------------------------------------------------------
void ofApp::update() {
	ship_move(shipOne);
	ship_bob_around(shipOne);
	if (ship_is_at_edge(shipOne)) {
		ship_bounce(shipOne);
	}
	for (int i = 0; i < 300; ++i) {
		move_star(star_field[i]);
		if (star_is_at_bottom(star_field[i])) {
			star_reset(star_field[i]);
		}
	}
	for (int i = 0; i < 25; ++i) {
		move_laser(laser_mag[i]);
	}

}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i = 0; i < 300; ++i) {
		draw_star(star_field[i]);
	}
	for (int i = 0; i < 25; ++i) {
		draw_laser(laser_mag[i], &laserImage);
	}
	ship_draw(shipOne, &ship);
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
	if (key == ' ') {
		fire_laser(shipOne, laser_mag[get_ship_lc(shipOne)]);
	}
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
