#include <stdio.h>
/**
* main - Entry point
*
* Return: returns 0 upon success.
**/

int main(void)
{
	int x;

	x = 0;

	while (x < 15)
	{

	putchar(x < 10 ? x + '0' : x - 10 + 'a');
	x++;

	}

	putchar('\n');

	return (0);

}


