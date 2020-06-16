#include "holberton.h"

/**
* _isalpha - checks for alphabetic character
* @c: character to check alphabetic
* Return: 1 for alpha, 0 if not
*/

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	return (1);
	else
		return (0);
}
