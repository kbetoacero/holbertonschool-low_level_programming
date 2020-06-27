#include "holberton.h"

/**
* _strncpy - copies a string
* @dest : destination string
* @src : soirce stringi
* @n : counter
* Return: string copied
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
