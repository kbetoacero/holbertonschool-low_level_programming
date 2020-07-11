#include "holberton.h"

/**
* _puts - prints a string followed by a new line. to stdout
* @str: string
* Return: string
*/

void _puts(char *str)
{
	int s;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		s++;
	}
	_putchar('\n');
}

