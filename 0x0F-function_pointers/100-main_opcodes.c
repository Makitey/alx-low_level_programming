#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes of the program
 * @a: address of the main function
 * @n: number of bytes
 * Return: void
 */

void print_opcodes(char *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%.2hhx", a[x]);
if (x < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: O
 */

int main(int argc, char **argv)
{
int a;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, a);
return (0);
}
