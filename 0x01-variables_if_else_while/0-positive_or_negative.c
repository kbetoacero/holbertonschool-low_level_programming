#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Function 0-positive_or_negative
*check a random number n
* Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	

	putchar('\n');
	return (0);
}
