#include <stdio.h>
/**
 * main - prints all arguments of the program
 * @argc: the count of the arguments entered
 * @argv: array pointer of the arguments
 *
 * Returns: returns 0 upon success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
