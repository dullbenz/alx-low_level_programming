#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: The character to be checked
 *
 * Return: 1 for alphabetic character and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
