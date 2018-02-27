//spaceship.cpp
#include "spaceship.h"
#include "ofMain.h"
#include <stdlib.h>

struct ship {
	int x;
	int y;
	int width;
	int height;
	ofColor color;
};

struct ship* construct_ship(int x, int y, int width, int height, ofColor color) {
	struct ship* this_ship = (struct ship*) malloc(sizeof(struct ship));
	this_ship->x = x;
	this_ship->y = y;
	this_ship->width = width;
	this_ship->height = height;
	this_ship->color = color;
	return this_ship;
}

void ship_draw(struct ship* ship) {
	ofSetColor(ship->color);
	ofDrawCone(ship->x, ship->y, ship->width, ship->height);
}

void ship_move_right(struct ship* ship) {
	ship->x += 10;
}

void ship_move_left(struct ship* ship) {
	ship->x -= 10;
}

void ship_bob_around(struct ship* ship);
