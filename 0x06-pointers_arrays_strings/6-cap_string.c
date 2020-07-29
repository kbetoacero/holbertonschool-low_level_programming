#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be changed
 *
 * Return: the pointer of the changed string
 */

char *cap_string(char *s)
{
	int separator[13] = {32, 9, 10, ',', ';', '.', '!',
			     '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i > 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == separator[j])
				{
					s[i] = s[i] - 32;
					break;
				}
			}
		}
		else if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
