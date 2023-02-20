#include <stdio.h>
/**
 * main - A program to print size of various types on computer
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu size of byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu size of byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu size of byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu size of byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu size of byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
