#pragma once


#define ABS(x)\
unsigned int result = 0;\
int const mask = x >> sizeof(int) * __CHAR_BIT__ - 1;\
result = (x + mask) ^ mask;\
x = result;
