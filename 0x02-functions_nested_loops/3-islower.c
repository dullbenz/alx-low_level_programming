#include "main.h"

/**
 * _islower - Check if character is a lowercase alphabetic character or not
 *
 * @c: The character to check for lowercase
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
