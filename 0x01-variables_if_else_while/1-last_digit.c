#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there*/

/**
 * main - entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n % 10 > 5)
				{
					printf("Last digit of %d is and is greater than 5\n", n);
				}
					else if (n == 0)
					{
						printf("Last digit of %d and is zero\n", n);
					}
				else
				{
					printf("Last digit of %d and is less than 6 and not 0\n", n);
				}
				return (0);
}
