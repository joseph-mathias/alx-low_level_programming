#include <stdio.h>

void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (10);
}

void print_alphabet_x10(void)
{
	int low;
	int i;

	while(i < 10)
	{
		for(low = 'a'; low <= 'z'; low++)
		{
			putchar(low);
		}
		putchar('\n');
		i++;
	}
}
