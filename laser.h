//weapon.h
#pragma once
#include "ofMain.h"
#include "ofApp.h"

struct laser* construct_laser(float h, float w);

void fire_laser(struct ship* ship, struct laser* laser, ofSoundPlayer sound, int* sm);

void draw_laser(struct laser* laser, ofImage* image);

void move_laser(struct laser* laser);

struct ship;
