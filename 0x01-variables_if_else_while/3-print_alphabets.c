#include<stdio.h>

/**
 * main - Print the alphabet in lowercase-upppercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
		putchar(letter);

	for (letter = 'A', letter < 'Z'; letter++)
		putchar(letter);

	putchar (0);
}
