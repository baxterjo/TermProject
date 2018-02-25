//block.cpp

#include "ofMain.h"
#include "block.h"
#include <stdlib.h>

struct block {
	float y;
	float x;
	float w;
	float h;
	ofColor color;
};

struct block* block_construct(float x, float y, float w, float h, ofColor color) {
	struct block* thisBlock = (struct block*) malloc(sizeof(struct block));

	thisBlock->x = x;
	thisBlock->y = y;
	thisBlock->w = w;
	thisBlock->h = h;
	thisBlock->color = color;

	return thisBlock;
}

void block_draw(struct block* block) {
	ofSetColor(block->color);
	ofDrawRectangle(block->x, block->y, block->w, block->h);

}

void block_grow(struct block* block) {
	block->h += .25;
	block->w += .25;
}

void block_shrink(struct block* block) {
	block->h -= .25;
	block->w -= .25;
}

void block_move_left(struct block* block) {
	block->x -= 3;
}

void block_move_right(struct block* block) {
	block->x += 3;
}

void block_move_up(struct block* block) {
	block->y -= 3;
}

void block_move_down(struct block* block) {
	block->y += 3;
}

void block_control(int key,struct block* block) {
	if (key == 'a') {
		block_move_left(block);
	}
	else if (key == 'w') {
		block_move_up(block);
	}
	else if (key == 'd') {
		block_move_right(block);
	}
	else if (key == 's') {
		block_move_down(block);
	}
	else if (key == OF_KEY_LEFT_SHIFT) {
		block_shrink(block);
	}
	else if (key == ' ') {
		block_grow(block);
	}
}