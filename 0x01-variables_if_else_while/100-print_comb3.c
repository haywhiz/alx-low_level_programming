#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i += 57; i++)
	{
		if (i == 89)
		{
			break;
		}

		putchar(i);
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}


