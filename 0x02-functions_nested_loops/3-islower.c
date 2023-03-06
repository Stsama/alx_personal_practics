#include <stdio.h>
#include "main.h"

/**
 * main - Checks for lowercase character
 *
 *Return 1 if the condition is true or 0 if the cond is false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
