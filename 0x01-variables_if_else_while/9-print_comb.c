#include <stdio.h>

/**
 * main - Prints all decimal digits
 * without using printf
 * Return: Exit status is zero means success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if(i == 57)
			break;
		putchar(',');
		putchar('\n');
	}
	putchar('\n');

	return (0);
}
