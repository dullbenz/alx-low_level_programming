#include "main.h"

/**
 * print_2_digit_int - Prints a 2 digit integer
 *
 * @n: The number to be printed
 */
void print_2_digit_int(int n)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}

/**
 * jack_bauer - Prints all the minutes of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	i = -1;
	while (++i < 24)
	{
		j = -1;
		while (++j < 60)
		{
			print_2_digit_int(i);
			_putchar(':');
			print_2_digit_int(j);
			_putchar('\n');
		}
	}
}
