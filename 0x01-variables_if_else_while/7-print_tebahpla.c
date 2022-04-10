#include <stdio.h>
/**
 * main - entry point
 * description - program to write lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}



