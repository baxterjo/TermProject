//weapon.h
#pragma once
#include "ofMain.h"
#include "ofApp.h"
#include <stdlib.h>
#include "ship.h"

struct laser* construct_laser(float h, float w);

void fire_laser(struct ship* ship, struct laser* laser);

void draw_laser(struct lazer* laser, ofImage* image);

void move_laser(struct laser* laser);
