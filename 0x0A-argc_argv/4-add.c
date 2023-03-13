#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, k, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			break;
	}
	if (!(i < argc))
	{
		printf("%d\n", 0);
		return (0);
	}
	for (k = 1; k < argc; k++)
	{
		if (atoi(argv[k]))
		{
			sum += atoi(argv[k]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
