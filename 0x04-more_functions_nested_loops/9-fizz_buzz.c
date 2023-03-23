#include <stdio.h>

/**
 * main - entry block hhhhhhhhhhhhhhhhhhhhhhhhhhh
 * @void: no argument
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		printf("%d ", i);
	}
}
printf("\n");
return (0);
}
