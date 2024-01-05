#include "main.h"

/**
* leet - encodes a string 1337, and changes given letters to numbers
* @ch: pointer to string
*
* Return: pointer to the string.
**/

char *leet(char *ch)
{
	int i;
	int j;
	char leet[11] = "aAeEoOtTlL";
	char nums[11] = "4433007711";


	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; ch[i] == leet[j]; j++)
		{

		ch[i] = nums[j];

		}
		}

		return (ch);

		}
