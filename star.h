//star.h
#pragma once
#include "ofMain.h"

struct star* construct_star(int x, int y, float b);

void move_star(struct star* star);

void draw_star(struct star* star);

bool star_is_at_bottom(struct star* star);

void star_reset(struct star* star);
