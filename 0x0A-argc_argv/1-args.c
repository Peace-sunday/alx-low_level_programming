#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number
 * of arguments passed into it
 * @argc: parameter
 * @argv: string
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 2);
	return (0);
}

