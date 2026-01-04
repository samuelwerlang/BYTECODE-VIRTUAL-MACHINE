#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

//Dynamic array
typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

//Helper functions
void initChunk (Chunk* chunk);

void writeChunk(Chunk* chunk, uint8_t byte);

#endif
