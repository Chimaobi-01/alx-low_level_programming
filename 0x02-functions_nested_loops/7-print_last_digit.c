#include "main.h"
/**
 * print_last_digit - it works
 * @d: given num
 * Return: last digit
 */
int print_last_digit(int d)
{
	d = d % 10;
	_putchar('0' + d);
	if (d < 0)
		return (d * (-1));
	return (d);
}
