#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
#endif /* FUNCTION_POINTERS */
