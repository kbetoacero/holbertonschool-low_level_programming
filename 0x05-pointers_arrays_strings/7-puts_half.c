#include "holberton.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: string
* Return : void
*/

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i])
	{
	i++;
	}
	if (i % 2 != 0)
	{
		len = ((i / 2) + 1);
	}
	else
	{
	len = (i / 2);
	}

	while (str[len])
	{
	_putchar(str[len]);
	str++;
	}
	_putchar('\n');
}
