#include "main.h"
/**
 * print_diagonal - function
 * @n: param
 */
void print_diagonal(int n)
{
	int y, x;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
