#ifndef COMPRESS_H
#define COMPRESS_H
#include "bitree.h"

typedef struct HuffNode_ {
  unsigned char symbol;
  int freq;
} HuffNode; 

typedef struct HuffCode_ {
  unsigned char used;
  unsigned short code;
  unsigned char size;
} HuffCode;

#define L277_TYPE_BITS 1
#define L277_WINOFF_BITS 12
#define L277_BUFLEN_BITS 5
#define L277_NEXT_BITS 8

#define LZ77_WINDOW_SIZE 4096
#define LZ77_BUFFER_SIZE 32

#define LZ77_PHRASE_BITS (LZ77_TYPE_BITS+LZ77_WINOFF_BITS\
                          +LZ77_NEXT_BITS+LZ77_BUFLEN_BITS)

#define LZ77_SYMBOL_BITS (LZ77_TYPE_BITS+LZ77_NEXT_BITS)

int huffman_compress(const unsigned char *original, unsigned char
**compressed, int size);

int huffman_uncompress(const unsigned char *compressed, unsigned char
**original);

int lz77_compress(const unsigned char *original, unsigned char **compressed,
int size);

int lz77_uncompress(const unsigned char *compressed, unsigned char
**original);

#endif

