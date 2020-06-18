#include "holberton.h"

/**
* _digit - checks if is a digit
* @c: character to check digit
* Return: 1 for digit, 0 if not
*/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
