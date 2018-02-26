// dot.h
#include "ofMain.h"

struct dot* dot_construct(float x, float y, float radius, ofColor color);

void dot_draw(struct dot* dot);

void dot_move_down(struct dot* dot);

void dot_grow(struct dot* dot);

void dot_move_right(struct dot* dot);

void dot_move_left(struct dot* dot);

void dot_move_up(struct dot* dot);

