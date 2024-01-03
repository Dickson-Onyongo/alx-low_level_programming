#include <stdio.h>
/**
* main - Entry point.
*
* Return: returns 0 upon success.
**/

int main(void)
{
	int n = 402;
	char ch;
	int *p = &n;

	ch = n;

	putchar(n);
	putchar('\n');


	*p = 98;

	putchar(n);

	return (0);

}
