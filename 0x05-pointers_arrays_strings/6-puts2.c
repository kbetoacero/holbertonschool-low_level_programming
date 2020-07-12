#include "holberton.h"

/**
* puts2 - prints every other character of a string, starting whit the first
* @str : string
* Return: void
*/

void puts2(char *str)
{
	while (*str)
	{
	if (*str % 2 == 0)
		{
		_putchar(*str);
		}
	str++;
	}
	_putchar('\n');
}
