#include <stdio.h>

/**
 * main - Print the sum of the first even fibonacci numbers <= 40000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev, temp, next;
	unsigned long int ans;

	prev = 1;
	next = 2;
	ans = 0;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			ans += next;
		temp = next;
		next += prev;
		prev = temp;
	}

	printf("%lu\n", ans);
	return (0);
}
