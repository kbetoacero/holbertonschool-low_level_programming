#include <stdio.h>

/**
 * main - Print numbers from 00 to 99
 *
 * Return: Always 0
 */

int main(void)
{

	int digit2 = 0;
	int digit1;

	while (digit2 <= 9)
	{
		digit1 = 0;

		while(digit1 <= 9)
		{

			putchar(digit2 + '0');
			putchar(digit1 + '0');

			if (digit2 + digit1 != 18)
			{
			putchar(',');
			putchar(' ');
			}
			digit1++;
		}
		digit2++;
	}
	putchar('\n');
	return (0);
}
