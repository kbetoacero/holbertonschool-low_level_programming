#include<stdio.h>

/**
 * main - Print the alphabet in lowercase-upppercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	char letter_A;

	letter = 'a';
	letter_A = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter_A <= 'Z')
	{
		putchar(letter_A);
		letter_A++;
	}

	putchar('\n');

	return (0);
}
