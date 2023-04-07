#include<stdio.h>

/**
 * main - prints the number of argumments passed followed by new line
 * @argc: the number of arguments in the program
 * @argv: an array of arguments
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
