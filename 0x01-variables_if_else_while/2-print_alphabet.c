y#include <stdio.h>

/**
 * main - Entry point
 * Description:prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
