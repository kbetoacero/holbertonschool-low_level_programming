#include "holberton.h"

/**
* *_strcat - concatenates 2 strings
* @dest : destination  string
* @src : source string
* @n : bytes
* Return : string
*/

char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1])
	{
		s1++;
	}
	while (src[s2])
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';

	return(dest);
}
