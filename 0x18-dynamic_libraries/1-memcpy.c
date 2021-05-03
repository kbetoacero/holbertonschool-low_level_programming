#include "holberton.h"

/**
* *_memcpy - copies memory area
* @src : source string
* @dest : destination string
* @n : n bytes from memory area
*
* Return: A pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
