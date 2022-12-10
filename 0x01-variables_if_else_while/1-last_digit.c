#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: assigns a random number to the variable n.
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("last digit of %d is %d and is greater than 5\n", n, last);
else if (last == 0)
printf("last digit of %d is %d and is zero\n", n, last);
else if (last != 0 && last < 6)
printf("last digit of %d is %d and is less than 6 an not 0\n", n, last);
return (0);
}
