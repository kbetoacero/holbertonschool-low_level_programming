#include "holberton.h"

/**
* jack_bauer - prints every minute of day
*
* void : minutes
* Return: void
*/
void jack_bauer(void)
{
	int m = 0;

	while (m < (1440))
	{
		_putchar('0' + (m / 60) / 10);
		_putchar('0' + (m / 60) % 10);
		_putchar(':');
		_putchar('0' + (m % 60) / 10);
		_putchar('0' + (m % 60) % 10);
		_putchar('\n');
		m++;
	}
}
