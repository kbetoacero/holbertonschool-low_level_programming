#include "holberton.h"

/**
* print_line - draws a straigh line
* @c: lenght of a line
* Return: Always 0
*/

void print_line(int n)
{
	int x = 1;

	while (x <= n)
	{
		if (x <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		x++;
	}
	_putchar('\n');
}
