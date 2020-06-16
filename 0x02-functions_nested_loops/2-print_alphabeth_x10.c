#include "holberton.h"

/**
* print_alphabet_x10 -  prints the alphabet lowercase 10 times
* followed by a new line
* Return : Always 0
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
		times++;
		_putchar('\n');
	}
}
