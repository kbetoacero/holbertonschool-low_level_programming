#include "holberton.h"
#include <stdio.h>

/**
* _strstr - find the ocurrence of the substring
* @needle : pointer to the sunstring to find
* @haystack : pointer to the string to search
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*b == *haystack && *b != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (NULL);
}
