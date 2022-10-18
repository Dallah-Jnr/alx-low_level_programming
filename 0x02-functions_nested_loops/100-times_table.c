#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0')
				_putchar((k % 10) + '0')
			}
		}
			_putchar('\n')
	}
}
