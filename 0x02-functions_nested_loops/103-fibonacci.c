#include <stdio.h>

/**
 * main - Print the first even fibonacci numbers <= 40000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev, temp, next;

	prev = 1;
	next = 2;

	while (next <= 4000000)
	{
		if ((next % 2) == 0)
			if (next + prev > 4000000)
				printf("%d\n", next);
			else
				printf("%d, ", next);
		temp = next;
		next += prev;
		prev = temp;
	}
	return (0);
}
