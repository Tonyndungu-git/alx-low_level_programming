#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */


int main(void)
{
int n;
int last = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;


if (last > 5)
printf("last digit of %d is %d and is greater than 5", n, last);
else if (last == 0)
printf("last digit of %d is %d and is zero ", n, last);
else if (last > 0 && last < 6)
printf("last digit of %d is %d and is less than 6 an not 0 ", n, last);
else
printf("error");
return (0);
}
