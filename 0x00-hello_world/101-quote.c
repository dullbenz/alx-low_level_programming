#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Uses the low level write function to print to stderr.
 *  The 1st parameter of write is the output stream i.e 2 for stderr
 *  The number of bytes to print is specified by the third parameter
 *
 * Return: Always 1 (Printing to stderr, hence failure)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
