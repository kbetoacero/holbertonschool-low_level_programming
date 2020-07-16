#include "function_pointers.h"

/**
* print_name - prints a name
* @name: pointer of the name to print
* @f: pointer to a function
*
* Return: void
*/

void print_name(char *name, void(*f)(char *))
{

	if (f && name)
		f(name);
}
