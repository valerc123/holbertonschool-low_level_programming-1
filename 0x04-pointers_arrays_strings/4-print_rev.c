#include "holberton.h"
/**
 * _strlen - calcs the len of a str
 * @s: pointer to the string to calc
 *
 * Return: the length of the str
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_rev - prints a string to the terminal, backwards!
 * @s: string to print
 *
 * Return: void just prints
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
