#include <stdio.h>
/**
 * main - entry point
 * description - program to write lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char hex;

	for (c = 30; c <= 39; c++)
	{
		putchar(c);
	}
	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}
	{
		putchar('\n');
	}
	return (0);
}



