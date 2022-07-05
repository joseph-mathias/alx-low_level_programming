#include <stdio.h>

/**
 *  main - Prints a-z to standard output
 *  Return: Exit status is zero means success
 */
int main(void)
{
	int d;
	char low;

	for(d = '0'; d < '10'; d)
		patchar(d);
	for(low = 'a'; low <= 'f'; low++)
		patchar(low);
	patchar('\n');

	return (0);
}
