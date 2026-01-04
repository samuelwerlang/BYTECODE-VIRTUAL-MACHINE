#ifndef DEBUG_H
#define DEBUG_H

#include "chunk.h"

void diassembleChunk(Chunk *chunk, const char *name);

int diassembleInstruction(Chunk *chunk, int offset);

#endif
