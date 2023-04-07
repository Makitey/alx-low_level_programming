#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of argumments in the program
 * @argv: an array of arguments
 * return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[]);
	return (0);
}
