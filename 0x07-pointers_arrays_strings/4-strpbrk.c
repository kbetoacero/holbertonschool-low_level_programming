#include "holberton.h"

/**
* _strpbrk - locates the first occurences in the string
* @s : string pointer to search
* @accept : pointer to set of bytes to search for
*
* Return: A pointer to the  pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
