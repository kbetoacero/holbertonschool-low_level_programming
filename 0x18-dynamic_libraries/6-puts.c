#include "holberton.h"

/**
* puts - prints every other character of a string, starting whit the first
* @str : string
* Return: void
*/

void puts(char *str)
{
	int n;

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
