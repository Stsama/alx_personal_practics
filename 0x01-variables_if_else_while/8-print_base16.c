#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char al = 'a';

	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');

		i++;
	}
	while (al < 'g')
	{
		putchar(al);

		al++;
	}
	putchar('\n');

	return (0);
}
