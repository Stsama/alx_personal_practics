#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char al = 'a';

	char bl = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (bl <= 'Z')
	{
		putchar(bl);
		bl++;
	}
	putchar('\n');
	return (0);
}

