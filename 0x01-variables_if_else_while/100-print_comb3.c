#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;
	/*possible combination of two  digit in base ten*/
	for (n = 48; n <= 56; n++)
	{
	/*possible combinations of two digits*/
	for (m = 49; m <= 57; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
		if (n != 56 || m != 57)
		{
			putchar(',');
			putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}

