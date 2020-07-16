#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name
* @f: pointer to a function
* @name : String
*/

void print_name(char *name, void(*f)(char *))
{

	if (name && f)
		f(name);
}
