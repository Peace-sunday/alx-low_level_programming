#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function to prints alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;
	/*Inside the loop body print the value of ch */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}

