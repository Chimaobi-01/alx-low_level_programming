#include "main.h"
/**
 * print_sign - display plus for positive numbers,
 * minus for negative numbers and 0 for 0
 * @n: holds argument given to the function
 * Return: 1 or -1 or 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('+');
	return (1);
}
