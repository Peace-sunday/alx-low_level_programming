#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - write a function that prints its name,
 * followed by a new line
 * @argc: parameter
 * @argv: string
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

