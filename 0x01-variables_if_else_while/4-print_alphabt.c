#include <stdio.h>
/**
 * main - entry point
 * description - using break and continue op
 * Return: Always 0 (success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'e')
		continue;
	
	else
	
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}

