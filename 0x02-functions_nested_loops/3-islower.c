#include "holberton.h"

/**
* _islower - checks for lowercase character
* @c: character to check lowercase
* Return: 1 for lower, 0 if not
*/

int _islower(int c)
{
	if ('a' == c && c <= 'z')
		return (1);
	else
		return (0);
}
