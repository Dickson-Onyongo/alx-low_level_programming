#include <stdio.h>
/**
 * main - entry point of a program tht prints all combinations of single digit numbers.
 * 
 * Return: returns 0 upon success.
 */

int main ()
{

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			putchar('\n');

		}


	}
return (0);

}

