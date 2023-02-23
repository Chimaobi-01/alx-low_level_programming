#include "main.h"
/**
 * print_last_digit - it works
 * @d: given num
 * Return: last digit
 */
int print_last_digit(int d)
{
	d %= 10;
	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (d);
}
