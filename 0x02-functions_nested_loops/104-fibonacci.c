#include <stdio.h>

/**
 * main - Print the first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev, temp, next, max_long_u, mod;
	int i, prev_t, next_t, temp_t;

	prev = 1;
	next = 2;
	prev_t = 0;
	next_t = 0;
	max_long_u = 99999999999999999;
	mod = max_long_u + 1;

	printf("1, 2, ");

	for (i = 0; i < 96; i++)
	{
		temp = next;
		temp_t = next_t;

		next += prev;
		next_t += prev_t + (int) (next / mod);
		next = next % mod;

		prev_t = temp_t;
		prev = temp;

		if (next_t > 0)
		{
			printf("%d", next_t);
			printf("%017lu%s", next, i == 95 ? "\n" : ", ");
		} else
		{
			printf("%lu%s", next, i == 95 ? "\n" : ", ");
		}
	}
	return (0);
}
