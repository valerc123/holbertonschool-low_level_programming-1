#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array of nmemb elements
 * @nmemb: how much mem to malloc
 * @size: size of elems
 *
 * Return: pointer to our mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *bigb;

	if (!nmemb || !size)
		return (NULL);

	bigb = malloc(nmemb * size);
	if (!bigb)
		return (NULL);
	while (nmemb)
		bigb[--nmemb] = 0;
	return (bigb);
}
