#include<stdio.h>

/**
 * main - Print the tebahpla
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		printf("%c", letter);
	letter--;
	}

	putchar('\n');

	return (0);
}
