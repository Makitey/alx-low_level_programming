#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: An array of pointers.
 * Return: int
 */

int main(int argc, char *argv[])
{
unsigned long mul;
int num1, num2;

	if (argc != 3)
	{ 
		printf("Error\n");
		exit(98);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
