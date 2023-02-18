#include <stdio.h>
/**
 * main - starts main function
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar(a);
		a++;
		i++;
	}
	putchar('\n');
}
