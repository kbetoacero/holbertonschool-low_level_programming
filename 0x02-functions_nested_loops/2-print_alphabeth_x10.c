#include "holberton.h"

/**
* main - 2-alphabet_x10.c
* prints the alphabet lowercase 10 times followed by a new line
*
*/
void print_alphabet_x10(void)
{

	int times = 0;

	while (times < 10)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		times++;
	}
}
