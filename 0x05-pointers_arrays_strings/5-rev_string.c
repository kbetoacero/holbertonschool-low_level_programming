#include "holberton.h"

/**
* rev_string - reverses a string
* @s: var type char
* Return : reversed string
*/

void rev_string(char *s)
{
	char swap;
	char *last = s;

	while (*last != '\0')
	{
	last++;
	}
	last--;

	while (s < last)
	{
	swap = *last;
	*last = *s;
	*s = swap;
	s++;
	last--;
	}
}

