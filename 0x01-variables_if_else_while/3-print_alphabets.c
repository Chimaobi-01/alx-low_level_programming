#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	char a = 'a', A = 'A';
	int i, len = 26;

	for (i = 0; i < len; i++)
	{
		putchar(a);
		a++;
	}
	for (i = 0; i < len; i++)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
