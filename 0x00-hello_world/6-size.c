/*
 * File 6-size.c
 */
 
 #include <stdio.h>
/*
 * main - Prints the size of various types on the computer it is compiled and run on.
 * returns 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int x;
	float f;
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(x));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}