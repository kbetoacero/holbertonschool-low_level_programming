#include <stdio.h>
/**
* main - Fizz_Buzz test
* Return : Always 0
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
