#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase letters from a - z
 *  
 * main - check the code.
 * 
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int low;

	for(low ='a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
}
