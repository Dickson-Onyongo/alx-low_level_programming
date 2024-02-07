#include "main.h"

/**
 * _isupper - function that checks for uppercase charracters
 * @c: int type numbers
 *Retrn: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}
