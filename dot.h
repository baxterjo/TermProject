// dot.h
#include "ofMain.h"

struct dot* dot_construct(float x, float y, float radius, ofColor color);

void dot_draw(struct dot* dot);

void dot_move_down(struct dot*);

void dot_grow(struct dot*);

void dot_move_right(struct dot*);

void dot_move_left(struct dot*);

void dot_move_up(struct dot*);

