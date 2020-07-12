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
	str--;

	while (*str)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
