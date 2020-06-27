#include "holberton.h"

/**
* *leet - encodes a string into 1337
* @s : str
* Return: string int0 1337
*/

char *leet(char *s)
{
	int i = 0;
	int x;
	char *up = "AEOTL";
	char *lw = "aeotl";
	char *n= "43071";

	while (*(s + i))
	{
		x = 0;
		while (lw[x])
		{
			if (*(s + i) == lw[x] || *(s + i) == up[x])
				{
				*(s + i) = n[x];
				}
		x++;
		}
	i++;
	}
	return (s);
}
