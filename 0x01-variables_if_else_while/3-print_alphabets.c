#include <stdio.h>

/**
 * main - Entry point
 * Description:prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
putchar(ch);
}
char ch1;
for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
{
putchar(ch1);
}
putchar('\n');
return (0);
}
