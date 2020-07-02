#include "holberton.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s : string to reverse
* Return : void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		_putchar (*s);
	}
}
