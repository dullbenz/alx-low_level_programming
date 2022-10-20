#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The integer whose last digit is to be printed
 *
 * Return: the last digit printed
 */
int print_last_digit(int n)
{
	int ans;
	ans = n < 0 ? -n % 10 : n % 10;
	_putchar('0' + ans);
	return ans;
}
