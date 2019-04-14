#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * struct x - stores formatr characters and their respective print functions
 * @name: character passed to print_all function
 * @type: function that prints using the data type that name represents
 */
typedef struct x
{
	char *name;
	void (*type)();
	} data;
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif
