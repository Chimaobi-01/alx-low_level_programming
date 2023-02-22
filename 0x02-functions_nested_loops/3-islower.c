#include "main.h"
/**
 * _islower - helps check for lowercase alphabets
 * @c: stores an int
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c < 97)
		return (0);
	return (1);
}
