#ifndef MAIN_H
#define MAIN_H
int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
#endif

#include "main.h"
#include <unistd.h>
/**
 * _putchar - used to write char "d" to stdot
 * @c: The character to be print
 * Return: 1 in success & error on -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
	}

/**
 * main - Entry point _putchar
 * description: print out
 * Return: 0 (success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
	}
