#include <stdio.h>

/**
 * main - Print the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, ans;

	i = 2;
	ans = 0;
	while (++i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			ans += i;
	}
	printf("%d\n", ans);
	return (0);
}
