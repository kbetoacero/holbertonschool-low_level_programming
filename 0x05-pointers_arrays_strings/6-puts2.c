#include "holberton.h"

/**
* puts2 - prints every other character of a string, starting whit the first
* @str : string
* Return: void
*/

void puts2(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	n++;
	}
	_putchar('\n');
}
