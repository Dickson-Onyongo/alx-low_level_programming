#include "main.h"

/**
* string_toupper - change all lowercase letters to uppercase.
* @c: string
* Return: returns c
*
*/

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\='; i++)
	{

		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;

		}

	}
	return (c);

}
