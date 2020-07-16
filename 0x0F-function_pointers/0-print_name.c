#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name
* @f: pointer to a function
* @name : String
* Return: Always 0
*/

void print_name(char *name, void(*f)(char *))
{

	if ((*f) == NULL)
		return;
	(*f)(name);
}
