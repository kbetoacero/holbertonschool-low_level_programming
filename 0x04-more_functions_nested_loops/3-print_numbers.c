#include "holberton.h"
#include <stdio.h>

/**
* print_numbers - prints numbers 0 to 9 
* followed by a new line
* Return : Always 0
*/

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
