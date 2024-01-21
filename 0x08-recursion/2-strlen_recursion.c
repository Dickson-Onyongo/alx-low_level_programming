#include "main.h"
/*
* _strlen_recursion - prints the lentgh of a string of char.
* @s: the string.
* Return: returns length of a string
*/

int _strlen_recursion(char *s)
{

	int count;

	if (*s == '\0')
		return (0);


	count = 1 + _strlen_recursion(s + 1);

	return (count);
}

