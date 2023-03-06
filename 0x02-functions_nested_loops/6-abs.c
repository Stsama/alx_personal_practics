#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: integer input
 *
 * Return: absolute value of an integer.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * (-1);
	return (i);
}
