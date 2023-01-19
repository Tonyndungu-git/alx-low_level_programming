#include <stddef.h>
#ifndef _FUNCTIONPOINTERS_H_
#define _FUNCTIONPOINTERS_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif
