#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: count of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 - if program receives two arguments
 *	   1 - if program doesnt receive two arguments
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
