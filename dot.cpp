// dot.cpp
#include "ofMain.h"
#include "dot.h"
#include <stdlib.h>

struct dot {
	float x;
	float y;
	float radius;
	ofColor color;
};

struct dot* dot_construct(float x, float y, float radius, ofColor color) {
	//Allocate memory and get the address of that memory.
	struct dot* thisDot = (struct dot*) malloc(sizeof(struct dot));
	//Prepare the dot, using param values
	thisDot->x = x;
	thisDot->y = y;
	thisDot->radius = radius;
	thisDot->color = color;

	return thisDot;

}

void dot_draw(struct dot* dot) {
	ofSetColor(dot->color);
	ofDrawCircle(dot->x, dot->y, dot->radius);
}

void dot_move_down(struct dot* dot) {
	dot->y += .5;

}

void dot_grow(struct dot* dot) {
	dot->radius += .25;
}