#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - from n to 98
* @n: from number
*
* Return: void
*/

void print_to_98(int n)
{


	while (1)
	{
		printf("%d%s", n, (n != 98) ? ", " : "\n");
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		else
			break;
	}
}
