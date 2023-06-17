#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry
 * Return: 0 Always (Success)
 */

int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
	putchar(low);
putchar('\n');
return (0);
}
