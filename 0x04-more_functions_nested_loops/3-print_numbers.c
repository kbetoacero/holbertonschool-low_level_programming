#include "holberton.h"

/**
* print_numbers - prints numbers 0 to 9 followed by a new line
* @n: number to print
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
