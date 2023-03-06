#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: interger choosed
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int  i, j, k;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;

				_putchar(',');
				_putchar(' ');
				if (k <= 99)
					_putchar(' ');
				if (k <= 9)
					_putchar(' ');
				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10)) % 10 + '0');
				}
				else if (k < 100 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

