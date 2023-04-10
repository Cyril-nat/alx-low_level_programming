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
	int i, arg1, arg2, res;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	arg1 = atoi(argv[1])
	arg2 = atoi(argv[2])
	res = arg1 * argv[2];

	printf("%d\n", res);

	return (0);
}
