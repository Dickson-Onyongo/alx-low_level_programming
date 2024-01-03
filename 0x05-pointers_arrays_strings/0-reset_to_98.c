#include <stdio.h>
/**
* main - Entry point.
*
* Return: returns 0 upon success.
**/

int main(void)
{
	char n = '402';
	char *p;

	p = &n;

	putchar(n);
	
	*p = '98';

	putchar(n);
}

	return (0);
