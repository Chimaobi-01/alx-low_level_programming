#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int i, ten = 10;

	for (i = 0; i < ten; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
