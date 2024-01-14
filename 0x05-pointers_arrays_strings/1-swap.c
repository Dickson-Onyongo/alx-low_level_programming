#included "main.h"

/**
* swap_int - swaps the values of  a and b
*
*@a: pointer 1
*@b: pointer 2
*Return: returns 0 upon success
*/

void swap_int(int *a, int *b)
{
	int amp;


	amp = *a;
	*a = *b;
	*b = amp;

}
