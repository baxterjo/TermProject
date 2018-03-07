//spaceship.cpp
#include "spaceship.h"
#include "ofMain.h"
#include <stdlib.h>

static const float ACCELERATION = 0.1;


struct ship {
	float x;
	float y;
	float v;
	float w;
	float h;
	float t;
	int lc;
};

struct ship* construct_ship(float x, float y, float w, float h) {
	struct ship* this_ship = (struct ship*) malloc(sizeof(struct ship));
	this_ship->x = x;
	this_ship->y = y;
	this_ship->w = w;
	this_ship->h = h;
	this_ship->t = 0;
	this_ship->v = 0;
	this_ship->lc = 0;
	return this_ship;
}

void ship_draw(struct ship* ship, ofImage* image) {
	ofSetColor(255, 255, 255);
	image->draw(ship->x, ship->y, ship->w, ship->h);
}

void ship_thrust_right(struct ship* ship) {
	ship->v += ACCELERATION;
}

void ship_thrust_left(struct ship* ship) {
	ship->v -= ACCELERATION;
}

void ship_move(struct ship* ship) {
	ship->x += ship->v;
	ship->v *= 0.995;
	ship->t += 0.01;
}

void ship_bob_around(struct ship* ship) {
	ship->y += 0.17 * sin(ship->t);
	ship->x -= .08 * cos(ship->t / 2);
	if (ship->t > 12.57) {
		ship->t = 0;
	}
}

bool ship_is_at_edge(struct ship* ship) {
	if (ship->x <= 0){
		ship->x = 0;
	return true;
	} else if ((ship->x + ship->w) >= ofGetWidth()){
		ship->x = ofGetWidth() - ship->w;
		return true;
	}
	return false;
}

void ship_bounce(struct ship* ship) {
	ship->v *= -0.5;
}