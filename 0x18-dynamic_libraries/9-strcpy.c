#include "holberton.h"

/**
* _strcpy - copies the string in another whit the terminating null
* @dest : destinations string
* @src : soirce string
* Return: Destination string
*/

char *_strcpy(char *dest, char *src)
{

	int i = 0;
	int c = 0;

	while (src[i] != '\0')
	{
		i++;
		c++;
	}

	i = 0;

	while (i <= c)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
