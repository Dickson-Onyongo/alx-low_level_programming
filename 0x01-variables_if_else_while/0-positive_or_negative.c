#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Main function: Entry point of the program
 * Description: generates a  random number  and checks if its positive,negative or zero.
 * Returns: 0 upon successful completion
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
