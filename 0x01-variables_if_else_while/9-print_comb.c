#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	do {
		putchar(c++);
		if (c - 1 != '9')
		{
			putchar(',');
			putchar(' ');
		}
	} while (c <= '9');

	putchar('\n');
	return (0);
}
