#include <stdio.h>
#include <unistd.h>
/**
 * main - A Program that print a line ,floowed by a new line to the standard error
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
