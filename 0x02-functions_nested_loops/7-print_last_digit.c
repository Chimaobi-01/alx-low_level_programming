#include "main.h"
/**
 * print_last_digit - it works
 * @d: given num
 * Return: last digit
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		d *= -1;
		d %= 10;
		_putchar('0'+d);
		return (d);
	}
	d %= 10;
	_putchar('0'+d);
	return (d);
}
