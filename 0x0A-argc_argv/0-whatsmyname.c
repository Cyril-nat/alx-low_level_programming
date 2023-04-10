#include <stdio.h>

/**
 * main - function that prints the name of the file
 * @argc: count of command line arguments
 * @argv: is an array of pointers to the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
