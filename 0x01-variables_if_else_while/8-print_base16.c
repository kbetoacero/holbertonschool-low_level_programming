#include<stdio.h>

/**
 * main - Print numbers base 16 lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char digit = '0';
	char letter = 'a';

	while (digit <= '9')
	{
		putchar(digit);
	digit++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
	letter++;
	}
	putchar('\n');

	return (0);
}
