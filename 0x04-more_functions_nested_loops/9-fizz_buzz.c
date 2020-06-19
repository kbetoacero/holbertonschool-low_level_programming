#include <stdio.h>

/**
* main - Fizz_Buzz test
* Return : Always 0
*
*/
int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("fizzbuzz");
			printf(" ");
			number ++;
		}
			else if (number % 5 == 0)
			{
				printf("buzz");
				printf(" ");
				number++;
			}
			else if (number % 3 == 0)
			{
				printf("fizz");
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
	return (0);
}
