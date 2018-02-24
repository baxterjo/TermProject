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