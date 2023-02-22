#include "main.h"
/**
 * print_alphabet_x10 - does its job correctly
 */
void print_alphabet_x10(void)
{
	int i, ten = 10;
	char a = 'a', z = 'z';

	for (i = 0; i < ten; i++)
	{
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
	}
}
