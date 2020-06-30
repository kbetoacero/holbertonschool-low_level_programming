#include "holberton.h"

/**
* _strspn - gets the lenght of a prefix substring
* @s : string pointer
* @accept : character to print pointer
* Return: the number of bytes in the initial segment
* of *s which consist only of bytes from *accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int c, p = 0;

	while (s[i])
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[i] == accept[c])
			{
				p++;
			}
		}
		if (p < i)
		{
			break;
		}
		i++;
	}
	return (p);
}
