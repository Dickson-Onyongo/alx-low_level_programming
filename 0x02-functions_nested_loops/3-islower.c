#include "main.h"
/**
 * _islower - if letter is lowercase,retun 1 else return o.
 *
 *@c: char type letter
 *Return: 1 if lowercase and 0 if not.
 */

 int _islower(int c)
 {
 	if (c >= 'a' && c <= 'z')
	{
		return (1);
		}
	else
	{
		return(0);
	}

}
