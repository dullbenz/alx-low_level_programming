#include "main.h"

/**
 * format_int_99 - Prints an integer between 0 and 99,
 * appends spaces at the beginning
 *
 * @n: The number to be printed
 */
void format_int_99(int n)
{
	char c = ' ';

	_putchar(' ');
	_putchar(n / 100 > 0 ? '0' + n / 100 : ' ');

	if (n / 100 > 0)
		c = '0';
	n = n % 100;
	_putchar(n / 10 > 0 ? '0' + n / 10 : c);
	_putchar('0' + n % 10);
}

/**
 * print_times_table - Print the n times table
 *
 * @n: The value whose time table is to be printed
 */
void print_times_table(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			} else
			{
				format_int_99(i * j);
				if (j == n)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
}
