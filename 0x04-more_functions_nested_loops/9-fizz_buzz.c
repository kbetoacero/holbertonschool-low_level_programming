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
			printf("FizzBuzz ");
			number++;
		}
			else if (number % 5 == 0)
			{
				printf("Buzz ");
				number++;
			}
			else if (number % 3 == 0)
			{
				printf("Fizz ");
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
