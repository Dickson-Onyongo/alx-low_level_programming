#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times with a new line
*
* return: returns 0 upon success
*/

void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch * 10);

	}
	_putchar('\n');

}
