#ifndef MY_MAIN_H
#define MY_MAIN_H

#include <stddef.h>
/* Memory manipulation functions */
void* memSet(void* s, int c, size_t n);
void* memCpy(void* dest, const void* src, size_t n);

/* String manipulation functions */
char* strChr(const char* str, int c);
size_t strSpn(const char* str, const char* accept);
char* strPBrk(const char* str, const char* accept);
char* strStr(const char* haystack, const char* needle);

/* Other functions */
int putChar(char c);
void printChessboard(char board[][8]);
void printDiagonalSums(int* matrix, size_t size);
void setString(char** str, const char* to);

#endif
