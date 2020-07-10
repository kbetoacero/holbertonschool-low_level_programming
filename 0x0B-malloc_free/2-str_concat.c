#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - Concatenates 2 strings
* @s1 : Pointer to 1st string
* @s2 : Pointer to 2nd string
* Return: Pointer or NULL on fail
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	else
	{
		i = 0;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	else
	{
		j = 0;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k <= (i + j); k++)
	{
		if (i != 0 && k < i)
			ptr[k] = s1[k];
		else if (j != 0 && k <= (i + j))
		{
			ptr[k] = s2[k - i];
		}
	}
	ptr[k - 1] = '\0';
	return (ptr);
}
