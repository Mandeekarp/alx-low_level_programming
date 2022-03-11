/*
 * File 5-prinf.c
 * Rule: use prinf NOT puts to print text
 */
 
 #include <stdio.h>
/*
 * main - Prints "with proper grammar, but the outcome is a piece of art,"
 * followed by a new line.
 * returns 0
 */
int main(void)
{
	prinf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}