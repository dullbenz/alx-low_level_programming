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

	ans = n % 10;
	ans = ans < 0 ? -ans : ans;
	_putchar('0' + ans);
	return (ans);
}
