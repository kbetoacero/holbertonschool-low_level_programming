#include<stdio.h>

/**
 * main - Print numbers from 00 to 99
 *
 * Return: Always 0
 */

int main(void)

{
	int digit1;
	int digit2;

	for (digit2 = 0; digit2 <= 9; digit2++)
	{
		for (digit1 = 0; digit1 <= 9; digit1++)
		{
			putchar(digit2 + '0');
			putchar(digit1 + '0');

			if (!(digit2 == 9 && digit1 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

return (0);
}
