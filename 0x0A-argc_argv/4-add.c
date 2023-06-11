#include <stdio.h>

/**
 * main - the sum of positive numbers followed by a new line
 * @argc: the number of arguments in a program
 * @argv: the array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int sum = num1 + num2;

	if (argc == 0)
	{
		printf("0\n");
	}

	else if (num1 == char || num2 == char)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
