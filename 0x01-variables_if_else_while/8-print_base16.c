#include <stdio.h>

/**
 *  main - Prints a-z to standard output
 *  Return: Exit status is zero means success
 */
int main(void)
{
	int d;
	char low;

	for (d = 48; d <= 57; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
