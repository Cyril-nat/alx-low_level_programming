#include <stdio.h>

/**
 * main - program to print all base 10 digits
 * starting from 0
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}

