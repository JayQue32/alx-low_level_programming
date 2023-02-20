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
	float e;

	printf("size of a char: %lu size of byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu size of byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu size of byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu size of byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu size of byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
