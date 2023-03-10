/**
 * A Simple File Security System
 * Demo in C Language.
 * Author: Deepak Kumar
 */
#include <stdio.h>   /* Header File for I/O functions */
#include <stdlib.h>  /* Header File for exit() function */
#include <string.h>  /* Header File for String functions */

int main(void)
{
	char password[] = "abc123", input[7];

	scanf("%s", &input);
	if (strcmp(input, password) == 0)
	{
		printf("Access granted");
		return 0;
	}
	else
	{
		printf("Access denied");
		exit(0);
	}
}





























