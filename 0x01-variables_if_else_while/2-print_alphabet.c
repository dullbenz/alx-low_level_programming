#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c++);
	} while (c <= 'z');

	putchar('\n');
	return (0);
}
