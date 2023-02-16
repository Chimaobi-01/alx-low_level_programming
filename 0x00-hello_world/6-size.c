#include <stdio.h>
/*
 * main function
 *
 * description - prints size of various data types
 *
 * return 0
 *
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char c));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int c));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long li));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long lli));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float f));
	return 0;
}
