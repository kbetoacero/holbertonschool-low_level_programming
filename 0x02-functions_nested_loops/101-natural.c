#include <stdio.h>

/**
* main- main
* Return: 0
*/

int main(void)
{
	int tot = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			tot += i;
	}
	printf("%d\n", tot);
	return (0);
}
