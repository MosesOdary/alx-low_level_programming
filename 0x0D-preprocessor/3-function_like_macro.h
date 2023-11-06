#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#define ABS(x)\
unsigned int result = 0;\
int const mask = x >> sizeof(int) * __CHAR_BIT__ - 1;\
result = (x + mask) ^ mask;\
x = result;;

#endif
