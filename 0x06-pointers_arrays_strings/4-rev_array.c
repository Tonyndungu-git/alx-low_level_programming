#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *l;
	int *k;
	int  m = 0;

	l =a;
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


void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
