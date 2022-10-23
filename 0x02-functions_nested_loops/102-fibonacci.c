#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev, temp, next;
	int i;

	prev = 1;
	next = 2;

	printf("1, 2\n");

	for (i = 0; i < 47; i++)
	{
		temp = next;
		next += prev;
		prev = temp;

		printf("%lu, ", next);
	}

	printf("%lu\n", prev + next);
	return (0);
}
