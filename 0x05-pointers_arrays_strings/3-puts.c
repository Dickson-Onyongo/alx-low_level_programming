#include <stdio.h>
/**
 * _puts - prints a string to stdout followed by new line.
 * @str: charracter array of string type.
 *
 * Return: returns 0 upon success.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}


	_putchar('\n');
}
