#include "main.h"

/**
* reverse_array - reverse the contents of an array of int
* @a: array of integers
* @n: number of elements in array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{

		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;

	}

}
