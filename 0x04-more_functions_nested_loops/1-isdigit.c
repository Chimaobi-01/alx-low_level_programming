#include "main.h"
/**
 * _isdigit - does what it says
 * @c: parameters
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
