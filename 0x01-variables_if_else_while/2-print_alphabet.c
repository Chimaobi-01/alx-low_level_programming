#include <stdio.h>
/**
 * main - starts main function
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
