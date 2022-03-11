#include <stdio.h>
#include <unistd.h>

/**
 * main 
 * Description: prints alphabets in lowercase followed by \n
 * Return 0
 */
 
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}