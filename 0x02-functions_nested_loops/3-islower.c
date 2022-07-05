#include <stdio.h>

int _islower(int c);
int main(void)
{
	int c = 'c';
	_islower(c);
	return(0);
}
int _islower(int c)
{
	if(c == 99)
		return (1);
	else
		return (0);
}
