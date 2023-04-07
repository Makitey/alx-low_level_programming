#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers followed by a new line
 * @argc: the number of arrguments in the program
 * @argv: an array of arguments
 * Return: if the program receives two arguments -0
 */

int main(int argc, char *argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;

	printf("%d\n", prod);
	return (0);
}
