#include<stdio.h>

/**
 * main- prints the program name followed by new line
 * @argc: the number of arguments written in the program
 * @argv: an array of arguments
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("The name of the program is: %s\n", argv[0]);
	return (0);
}
