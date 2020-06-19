#include <stdio.h>

/**
* main - Fizz_Buzz test
* Description : Print number from 1 to 100
* for multiple of 3 print Fizz
* for multiple of five print Fuzz
* for multiple of 3 and 5 print FizFuzz
* Return: Always 0
*/
int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			number++;
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			number++;
		}
		else if (number % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
				number++;
			}
		else
		{
		printf("%d", number);
		printf(" ");
		number++;
		}
	}
	printf("\n");
	return (0);
}
