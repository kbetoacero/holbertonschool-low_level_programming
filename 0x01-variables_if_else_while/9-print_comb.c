#include<stdio.h>

/**
 * main - Print combinations os single-digits
 *
 * Return: Always 0
 */

int main(void)
{

	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

return (0);
}
