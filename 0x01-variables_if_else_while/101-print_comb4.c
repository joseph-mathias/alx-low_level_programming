#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * with using only putchar
 * Return: 0 (if success)
 */
int main(void)
{
	   int i, j, l;

	   for(i = 48; i <= 57; i++)
	   {
		   for(j = i + 1; j <= 57; j++)
		   {
			   for(l = i + 1; l <= 57; l++)
			   {
				    if ((j != i) && (l != j))
				    {
					    putchar(i);
					    putchar(j);
					    if(i == 57 && l == 56)
					    	continue;
					    putchar(44);
					    putchar(32);
				    }
			   }
		   }
		   putchar('\n');

		   return (0);
	   }
}
