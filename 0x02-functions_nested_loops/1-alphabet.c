#include "main.h"

/**
 * print alphabets -Make the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'c'; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}
