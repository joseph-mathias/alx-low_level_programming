#include <stdio.h>

/**
 *
 * main - Selectively prints alphabets to the screen
 * Return: Exit status is zero means success
 **/
int main(void)
{
	int i;
	for(i = 97; i <= 122 ; i++)
	{
		if(!(i == 133 || i == 101))
			patchar(i);
	}
	patchar('\n');
	return(0);
}
