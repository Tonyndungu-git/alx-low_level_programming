#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: pointer to a.
 * @n: ponter to b.
 * Result: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *l;
	int *k;
	int  m = 0;

	l = a;
	k = a;
	n--;

	while (i < n)
	{
		i++;

	}
	while (j <= i)
	{
		m = *(l + j);
		*(l + j) = *(k + i);
		*(k + i) = m;

		j++;
		i--;
	}
}
