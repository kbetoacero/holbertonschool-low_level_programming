#include "holberton.h"

/**
* _isupper - checks for uppercase character
* @c: character to check uppercase
* Return: 1 for upper, 0 if not
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
