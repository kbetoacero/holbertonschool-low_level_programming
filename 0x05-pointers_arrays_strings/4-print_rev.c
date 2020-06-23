#include "holberton.h"

/**
* print_rev - prints a string in reverse followed by a new line. to stdout
* @str: string
* Return: string
*/

void print_rev(char *str)
{
	while (*str != '\0')
	{
	str++;
	}
	while (*(str - 1))
	{
		_putchar(*(str - 1));
		str--;
	}
	_putchar('\n');
}
