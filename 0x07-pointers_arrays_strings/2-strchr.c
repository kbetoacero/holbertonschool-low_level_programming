#include "holberton.h"

/**
* _strchr - locates a character in a string
*@s : string
*@c : character occurence
* Return: A pointer to the first occurrence of the caracter c or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
<<<<<<< HEAD
		else
		{
			return ('\0');
		}
		s++;
	}
=======
		s++;
	}
	return (!c ? s : '\0');
>>>>>>> 419fdd058d52fdffd45a7a040b19a9e23df12aea
}
