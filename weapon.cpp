// weapon.cpp

#include "ofMain.h"
#include "weapon.h"
#include "spaceship.h"

struct laser {
	float speed;
	float x;
	float y;
	float h;
	float w;
	ofColor color;
};

struct laser* construct_laser(float s, float h, float w, float x, float y) {
	struct laser* this_laser;
	this_laser = (struct laser*) malloc(sizeof(struct laser));
	this_laser->speed = s;
	this_laser->h = h;
	this_laser->w = w;
	this_laser->x = 0;
	this_laser->y = ofGetHeight() + (h * 2);

	return this_laser;
}

void fire_laser(struct ship* ship, struct laser* laser) {
	laser->x = ship->x + (ship->w / 2);
	laser->y = ship->y + (ship->h / 2);
	ship->lc += 1;
	if (ship->lc = 25) {
		ship->lc = 0;
	}
}