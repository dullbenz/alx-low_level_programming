#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, c = '0';

	for (i = 0; i < 16; i++)
	{
		putchar(c++);
		if (c - 1 == '9')
			c = 'a';
	}

	putchar('\n');
	return (0);
}
