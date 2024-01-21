#include "main.h"
/**
* factorial(int n) - returns the factorial of a given number.
* @n:the number
* Return: the factorial of a number.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
	

