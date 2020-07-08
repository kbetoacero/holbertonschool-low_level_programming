#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - return a pointer to a newlly allocated space in memory which
* contains a copy of the string given as a parameter
* @str : string
* Return: a pointer to a new string which i a duplicate of the str
*/

char *_strdup(char *str)
{
	int len = 0;
	int i, j;
	char *s2;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i])
	{
		i++;
	}

	len = i + 1;

	s2 = malloc(len * sizeof(char));

	if (s2 == NULL)
		return (NULL);

	j = 0;

	while (j <= len)
	{
		s2[j] = str[j];
		j++;
	}

	return (s2);
}
