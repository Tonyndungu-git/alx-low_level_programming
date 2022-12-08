#include <stdio.h>

/**
 * main - Entry point
 * function prints the size of various data types
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;


printf("Size of a char: %ld bytes(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("Size of a float: %ld byte(s)\n", sizeof(f));

return (0);


}
