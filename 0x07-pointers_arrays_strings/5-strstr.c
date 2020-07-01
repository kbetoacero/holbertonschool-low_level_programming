#include "holberton.h"

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
	int i = 0;

	if (*needle == '\0')
	{
		return (0);
	}
	while (needle[i])
	{
		while (*haystack)
		{
			if (*haystack == needle[i])
			{
				return (haystack);
			}
			haystack++;
		}
		i++;
	}
	return ('NULL');
}
