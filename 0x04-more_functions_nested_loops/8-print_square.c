#include "holberton.h"

/**
* print_square - prints a square
* @size: Number of lines and columns
*/
void print_square(int size)
{
	int l = 1;

	if (size > 0)
	{
		while (l <= size)
		{
			int c = 1;

			while (c <= size)
			{
				_putchar('#');
				c++;
			}
		_putchar('\n');
		l++;
		}
	}
	else
	_putchar('\n');
}
