#include "main.h"

/**
 * print _numbers - function that prints numbers from 0 to 9
 * followed by new line
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');


	}
	_putchar('\n');

}

