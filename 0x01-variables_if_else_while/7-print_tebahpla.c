#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	char z = 'z', a = 'a';

	do {
		putchar(z);
		z--;
	} while (z >= a);
	putchar('\n');
	return (0);
}
