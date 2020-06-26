#include "holberton.h"

/**
* _strncat - concatenates 2 strings
* @dest : destination  string
* @src : source string
* @n : bytes
* Return: concatenated strings in destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int srclength = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
	length++;
	}

	while (src[srclength] != '\0')
	{
	srclength++;
	}

	while (i < n)
	{

	if (i > srclength)
	{
		break;
	}

	dest[length] = src[i];
	length++;
	i++;
	}

	dest[length] = '\0';

	return (dest);
}
