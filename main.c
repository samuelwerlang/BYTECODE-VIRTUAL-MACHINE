#include "./include/common.h"
#include "./include/chunk.h"
#include "./include/debug.h"
int main(int argc, const char* argv[]) {
    Chunk chunk1;
    initChunk(&chunk1);
    writeChunk(&chunk1, OP_RETURN);
    writeChunk(&chunk1, OP_RETURN);
    diassembleChunk(&chunk1, "test chunk");
    freeChunk(&chunk1);  
    return 0;
}
