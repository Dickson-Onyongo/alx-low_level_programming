#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints the alphabet in loercase and adds a new line
*
* Return: returns 0 upon success
*/

void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

	}
		_putchar('\n');

}

