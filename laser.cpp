// weapon.cpp
#include "laser.h"

struct laser {
	float x;
	float y;
	float h;
	float w;
	ofColor color;
};



struct laser* construct_laser(float h, float w) {
	struct laser* this_laser;
	this_laser = (struct laser*) malloc(sizeof(struct laser));
	this_laser->h = h;
	this_laser->w = w;
	this_laser->x = 0;
	this_laser->y = ofGetHeight() + (h * 2);

	return this_laser;
}

void fire_laser(struct ship* ship, struct laser* laser) {
	laser->x = get_ship_x(ship) + (get_ship_w(ship) / 2 - (laser->w / 2));
	laser->y = get_ship_y(ship) + (get_ship_h(ship) / 2);
	cycle_ship_lc(ship);
}

void move_laser(struct laser* laser) {
	if (laser->y < ofGetHeight() && laser->y > laser->h * -1) {
		laser->y -= 8;
	}
	else {
		laser->x = 0;
		laser->y = ofGetHeight() + (laser->h * 2);
	}
}

void draw_laser(struct laser* laser, ofImage* image) {
	if (laser->y < ofGetHeight() && laser->y > laser->h * -1) {
		ofSetColor(255, 255, 255);
		image->draw(laser->x, laser->y, laser->w, laser->h);
	}
}