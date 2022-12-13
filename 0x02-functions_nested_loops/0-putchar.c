#include <unistd.h>
#define MAXSTRING 80
#include "main.h"
/**
 * main - check the code
 * Description : Its prints a string using _putchar
 * Return: Always 0.
 */

int main(void)
{
	char message[] = "_putchar";

	for (int count = 0; count < MAXSTRING; count++)
	{
		if (message[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(message[count]);
	}
	return (0);
}
