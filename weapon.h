//weapon.h
#pragma once
#include "ofMain.h"
#include "ofApp.h"
#include <stdlib.h>
#include "spaceship.h"

struct laser* construct_laser(float s, float h, float w, float x, float y);

void fire_laser(struct ship* ship, struct laser* laser);
