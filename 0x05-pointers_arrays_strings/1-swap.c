#include "main.h"

/**
 * swap_int -  A function that swaps the value of two integers.
 * @a: An input integer pointer
 * @b: An integer input pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
