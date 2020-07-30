#include "holberton.h"

/**
* binary_to_uint - converts binary number to an unsigned int
* @b: string of 0 and 1
* Return: the converted number, or 0 if: there is one or more chars
* in the string b that is not 0 or 1 or  b is null
*/

unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		result += (b[i] - 48) << j;
		i--;
		j++;
	}
	return (result);
}
