//spaceship.h
#pragma once
#include "ofMain.h"
#include <stdlib.h>
#include "weapon.h"


struct ship;

struct ship* construct_ship(float x, float y, float w, float h);

void ship_draw(struct ship* ship, ofImage* image);

void ship_thrust_right(struct ship* ship);

void ship_thrust_left(struct ship* ship);

void ship_move(struct ship* ship);

void ship_bob_around(struct ship* ship);

bool ship_is_at_edge(struct ship* ship);

void ship_bounce(struct ship* ship);