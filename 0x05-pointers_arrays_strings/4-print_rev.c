#include "main.h"
/**
 * print_rev - prints a atring in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	for (i = i; *(s + i) != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}