#include "main.h"

/**
 * _isupper - Checks if a number is upper
 * @c: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
