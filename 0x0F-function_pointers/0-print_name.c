#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name
* @name: String
* @f: pointer to a function
* Return: none
*/

void print_name(char *name, void(*f)(char *))
{

	if ((*f) == NULL)
		return;
	(*f)(name);
}
