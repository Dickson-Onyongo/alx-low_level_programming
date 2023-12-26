#include <stdlib.h>
#include <time.h>
/* 
 * main - checks if n is positive or negative.
 *
 * Return- returns zero upon success
 * 
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf( n , "is positive");
	}
	else if (n == 0)
	{
		printf(n, "is zero");
	}
	else (n < 0)
	{
		printf(n , "is negative");
	}
	return (0);
}
