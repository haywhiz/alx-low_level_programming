#include "main.h"

/**
 *   main - entry point
 *   
 *  Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
int main(int argc, char* argv[])
{
	print_alphabet();
}
