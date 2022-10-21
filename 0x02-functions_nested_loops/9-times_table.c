#include "main.h"

/**
 * format_int_99 - Prints an integer between 0 and 99,
 * appends spaces at the beginning
 *
 * @n: The number to be printed
 */
void format_int_99(int n)
{
	_putchar(' ');
	_putchar(n / 10 > 0 ? '0' + n / 10 : ' ');
	_putchar('0' + n % 10);
}

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			} else
			{
				format_int_99(i * j);
				if (j == 9)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
}
