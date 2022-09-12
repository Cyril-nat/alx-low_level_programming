#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 (successful)
 */

int main(void)  
{  
  printf("Size of a char: %d byte(s)\n", sizeof(char));
  printf("Size of an int: %d byte(s)\n", sizeof(int));
  printf("Size of a double: %d byte(s)\n", sizeof(double)); 
  printf("Size of a float: %d byte(s)\n", sizeof(float));
  
  return (0);
}
