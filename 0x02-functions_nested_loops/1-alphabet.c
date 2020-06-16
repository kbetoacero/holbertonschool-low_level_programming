#include "holberton.h"

/**
* main - 1-alphabet.c
* prints the alphabet lowercase followed by a new line
*
*/
void print_alphabet(void)
{

	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
