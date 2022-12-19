#include "main.h"

/**
 *swap_int - swap integer values.
 *@a: Pointer integer a
 *@b: Pointer integer b
 *Return: void
 */

void swap_int(int *a, int *b)
{

	int c;
	int d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
