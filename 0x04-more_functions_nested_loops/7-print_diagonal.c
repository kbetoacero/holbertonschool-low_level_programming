#include "holberton.h"

/**
* print_diagonal - draws a diagonalline
* @n: lenght of a line
* Return: Always 0
*/

void print_diagonal(int n)
{
	int times = 0;

	if (n > 0)
	{
		while (times < n)
		{
			int spaces = 0;

			while (spaces < times)
			{
				_putchar(' ');
				spaces++;
			}

		_putchar('\\');
		_putchar('\n');
		times++;
		}
	}
	else
	_putchar('\n');
}
