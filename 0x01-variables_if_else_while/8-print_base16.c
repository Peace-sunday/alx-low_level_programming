#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	char ch;
	/*print the numbers of base 16*/
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	/*print the letters in lower case*/
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

