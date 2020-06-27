#include "holberton.h"

/**
* *rot13 - encodes a string into rot13
* @s : str
* Return: string int0 rot13
*/

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		y = 0;
		while (y <= 51)
		{
			if (s[x] == a[y])
			{
				s[x] = rot13[y];
				break;
			}
		y++;
		}
	x++;
	}
	return (s);
}
