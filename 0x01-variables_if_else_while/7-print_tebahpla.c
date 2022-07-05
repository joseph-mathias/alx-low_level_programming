#include <stdio.h>
/**
 * main - Prints z-a to standard output
 * Return: Exit status is zero means success
 */

int main(void)
{
	char low;

	for(low = 'z'; low >= 'a'; low--)
		patchar(low);
	patchar('\n');

	return (0);
}
