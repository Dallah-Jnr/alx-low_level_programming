#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: The parameter to be worked on.
 *
 * Return: Always n.
 */
int print_last_digit(int n)
{
	int last_digit = ((n < 0) ? (n + 10) * -1 : n) % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
