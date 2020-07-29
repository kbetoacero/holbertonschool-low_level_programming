#include <stdio.h>

/**
* main - Fizz_Buzz test
*
* Description : Print number from 1 to 100
* for multiple of 3 print Fizz
* for multiple of five print Fuzz
* for multiple of 3 and 5 print FizFuzz
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("Buzz");

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
