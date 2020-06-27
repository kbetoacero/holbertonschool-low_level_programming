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
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (j <= 51)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		j++;
		}
	i++;
	}
	return (s);
}
