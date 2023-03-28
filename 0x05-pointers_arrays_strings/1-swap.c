#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to an int.
 * @b: Pointer to an int.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
