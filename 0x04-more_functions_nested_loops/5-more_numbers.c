#include "holberton.h"
#include <stdio.h>
/**
* more_numbers - prints 10 times numbers from 0 to 14
* followed by a new line
* Return : Always 0
*/

void more_numbers(void)
{
	int times = 0;

	while (times < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n > 9)
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
	_putchar('\n');
	times++;
	}
}
