//spaceship.h
#pragma once
#include "ofMain.h"



struct ship* construct_ship(int x, int y, int width, int height, ofColor color);

void ship_draw(struct ship* ship);

void ship_move_right(struct ship* ship);

void ship_move_left(struct ship* ship);

void ship_bob_around(struct ship* ship);
