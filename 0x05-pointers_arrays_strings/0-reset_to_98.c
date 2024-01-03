#include <stdio.h>
/**
* main - Entry point.
*
* Return: returns 0 upon success.
**/
void reset_to_98(void);

int main(void)
{
	reset_to_98(void);

	int n = 402;
	char ch = n;
	int *p = &n;


	putchar(ch);
	putchar('\n');


	*p = 98;

	putchar((char)*p);

	return (0);

}
