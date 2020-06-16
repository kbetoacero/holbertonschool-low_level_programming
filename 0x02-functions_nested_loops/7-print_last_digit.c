#include "holberton.h"

/**
* print_last_digit - print last digit of a number
*
* @n: last digit
* Return: n
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;
	_putchar('0' + last);
	return (last);
}
