#include "main.h"

/**
 * print_integer - Print integer to console
 *
 * @n: The integer to be printed
 */
void print_integer(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 == 0)
		_putchar('0' + n);
	else
	{
		print_integer(n / 10);
		_putchar('0' + n % 10);
	}
}

/**
 * print_to_98 - Print all numbers from n to 98
 *
 * @n: The number n to print from
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_integer(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	print_integer(98);
	_putchar('\n');
}
