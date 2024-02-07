#include "main.h"

/**
 * _isdigit - function that checks for a digit 
 * @c: the digit of int type
 * Returns: returns 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);

}

