#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: single letter input
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))

		return (1);
	else
		return (0);
}
