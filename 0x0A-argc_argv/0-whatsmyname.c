#include <stdio.h>

/**
 * main - main program that prints its name,followed by new line.
 * @argc: count of argumrnts supplied to the program
 * @argv: array of strings containing those arguments
 *
 * Return: returns 0 upon succcess.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n" argv[0]);

	return (0);
}
