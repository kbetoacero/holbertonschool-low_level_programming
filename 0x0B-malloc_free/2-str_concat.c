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

	char *p = "";
	char *empty = "";
	int len1 = 0, len2 = 0;
	int i;

	if (!s1)
		s1 = p;
	if (!s2)
		s2 = empty;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	p = malloc(sizeof(*p) * len1 + len2 + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i <= len2; i++)
		p[len1 + i] = s2[i];
	return (p);
}
