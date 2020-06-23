#include "holberton.h"

/**
* _strlen - returns lenght of a string.
* @s: string
* Return: lenght of the string
*/

int _strlen(char *s)
{
	int i;

	while (*(s + i))
	i++;
	return (i);
}
