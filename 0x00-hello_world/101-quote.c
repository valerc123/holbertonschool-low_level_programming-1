#include <unistd.h>

/**
 * main - Entry point
 * uses write not to make text appear in the stderr
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
