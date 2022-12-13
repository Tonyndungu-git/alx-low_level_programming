#include <unistd.h>
#define MAXSTRING 80

/**
 * main - check the code
 * Description : Its prints a string using _putchar
 * Return: Always 0.
 */

/**
 * main - check the code
 * writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
