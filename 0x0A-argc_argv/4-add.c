#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int n;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (int i = 1; i < argc; i++)
	{

		if (sscanf(argv[i], "%d", &n) == 1)
		{
			sum += n;
			printf("%d", sum);
		}
		else
			printf("Error");

	}
	return (0);
}
