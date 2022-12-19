#include "main.h"
#include <stdio.h>


void rev_string(char *s)
{
	char *l;
	char tmp;
	l =  s;

	while (*(l+1) != '0')
	{
		l ++;
	}
	i -= 1;
	while (s < l)
	{
		tmp = *s;
		*s = *l;
		*l = tmp;
		s = s + 1;
		l = l - 1 ;
	}

}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

