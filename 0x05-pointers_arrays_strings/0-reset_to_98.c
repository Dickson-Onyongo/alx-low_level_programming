#include <stdio.h>
/**
* main - Entry point.
*
* Return: returns 0 upon success.
**/

int main(void)
{
	int n = 402;
	char ch = n;
	int *p = &n;


	putchar(ch);
	putchar('\n');


	*p = 98;

	putchar(ch);

	return (0);

}
