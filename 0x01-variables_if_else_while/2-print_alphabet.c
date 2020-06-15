#include <stdio.h>

/**
*main - 2-print_alphabet
*Print the alphabet in lowercase letters
*
* Return: Always 0
*/

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
