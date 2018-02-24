// block.h
#include "ofMain.h"

struct block* block_construct(float x, float y, float w,float h, ofColor color);

void block_draw(struct block* block);

void block_move_down(struct block*);

void block_grow(struct block*);
