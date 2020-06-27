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
	char *r = "43071";

	while (*(s + i))
	{
		x = 0;
		while (lw[x])
		{
			if (*(s + i) == lw[x] || *(s + i) == up[x])
				{
				*(s + i) = r[x];
				}
		x++;
		}
	i++;
	}
	return (s);
}
