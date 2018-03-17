//hud.cpp
/*I wanted to name this hud to keep future development in mind,
it only does score now, but if I were to add a "lives remaining" dsiplay or
a "Ammo" display, they would go here.*/

#include "hud.h"
#include "ofMain.h"
#include "ofApp.h"
#include "laser.h"

void score_update(int* score, int* sm) {
	*score += 1 * *sm;
}

void score_draw(string words, int* score, ofTrueTypeFont font) {
	string scoreString = ofToString(*score);
	ofSetColor(255);
	font.drawString(words, ofGetWidth() / 2 - font.stringWidth(words), 50);
	font.drawString(scoreString, ofGetWidth() / 2, 50);
}
