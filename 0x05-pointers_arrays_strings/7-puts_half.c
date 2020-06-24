#include "holberton.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: string
* Return : void
*/

void puts_half(char *str)
{

	int n = 0;
	int l = 0;
	int m;

	while (str[l] != '\0')
	{
	l++;
	}

	if (l % 2 != 0)
	{
		m = (l / 2) + 1;
	}
	else
	{
		m = (l / 2);
	}

	n = m;

	while (n < l)
	{
		_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
