#include "function_pointers.h"

/**
* print_name - print a name
*
* @name: string to print
* @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
