// block.h
#include "ofMain.h"

struct block* block_construct(float x, float y, float w,float h, ofColor color);

void block_draw(struct block* block);

void block_grow(struct block* block);

void block_shrink(struct block* block);

void block_move_left(struct block* block);

void block_move_right(struct block* block);

void block_move_up(struct block* block);

void block_move_down(struct block* block);

void block_control(int, struct block* block);