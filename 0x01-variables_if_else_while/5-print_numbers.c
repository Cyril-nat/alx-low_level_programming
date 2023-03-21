#include <stdio.h>

/**
 * main - program to print the single digit numbers
 * between 0-10
 * Return: 0
 */

int main(void)
{
	int man;

	for (man = 0; man < 10; ++man)
		printf("%d", man);

	putchar('\n');

	return (0);
}
