//star.cpp
#include "star.h"
#include "ofMain.h"
#include <stdlib.h>

struct star {
	int x;
	int y;
	int r;
	float s;
	ofColor color;
};

struct star* construct_star(int x, int y, float b) {
	star* star = (struct star*) malloc(sizeof(struct star));
	star->x = x;
	star->y = y;
	star->r = 50;
	star->s = b/ 100;
	star->color = ofColor(1 * b, 1 * b, 1 * b);

	return star;
}

void move_star(struct star* star) {
	star->y += star->s;

}

void draw_star(struct star* star) {
	ofSetColor(star->color);
	ofDrawRectangle(star->x, star->y, star->r, star->r);
}

bool star_is_at_bottom(struct star* star) {
	return star->y > ofGetHeight() + (star->r * 2);
}

void star_reset(struct star* star) {
	star->y = 0;
	star->x = ofRandom(0, ofGetWidth());
}
