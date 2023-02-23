#include "main.h"
/**
 * print_most_numbers - function
 * Return: 0
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
