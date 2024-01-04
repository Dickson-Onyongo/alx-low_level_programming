#include "main.h"
/**
* _strcat - concatenates two strings
* @dest : destination.
* @src : source.
* Return: the pointer to dest.
*/

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count1 = 0;

	while (dest[count] != '\0')
	{

		count++;
	}

	while (src[count1] != '\0')
	{

		*(dest + count) = *(src + count1);

		count++;
		count1++;

	}

	dest[count] = '\0';
	return (dest);

}
