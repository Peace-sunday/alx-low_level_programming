#include "main."

/**
 * print_alphabet - function to prints alphabet in lowercase
 * followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char c;
	/*Inside the loop body print the value of c */
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

