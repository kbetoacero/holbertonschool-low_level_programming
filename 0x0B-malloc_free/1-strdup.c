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
	int i = 0;
	char *s2;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	s2 = malloc(sizeof(len + 1) * sizeof(char));

	if (s2 == NULL)
		return (NULL);

	i = 0;

	while (i < len + 1)
	{
		s2[i] = str[i];
		i++;
	}

	s2[i] = '\0';

	return (s2);
}
