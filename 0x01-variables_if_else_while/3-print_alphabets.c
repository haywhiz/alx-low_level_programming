#include <stdio.h>
/**
 * main - entry point
 * description - program to write lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	for (c = 'a', 'A' ; c <= 'z', 'Z'; c++, C++)
	{
		putchar(c);
		putchar(C);
	}
	{
		putchar('\n');
	}
	return (0);
}



