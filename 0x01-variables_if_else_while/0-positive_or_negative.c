#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point of the program

 * Description:
 *	this function generates random number and checks if its positive,
 *	negative or 0. it then orints the results and returns 0 upon success.

 * Return: returns 0 upon successful completion
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
