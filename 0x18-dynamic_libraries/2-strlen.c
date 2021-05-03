#include "holberton.h"
/**
* _strlen - returns lenght of a string.
* @s: string
* Return: lenght of the string
*/

int _strlen(char *s)
{
	int len;


	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
