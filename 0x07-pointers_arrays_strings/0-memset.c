#include "holberton.h"

/**
* _memset - fills memory whit a constant byte
* @s : string
* @n : n bytes
* @b : buffer
* Return: pointer to the  memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
