#include "holberton.h"

/**
* *_strcat - concatenates 2 strings
* @dest : destination string
* @src : source string
* Return: concatenates string
*/

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d])
	{
		d++;
	}
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
