#include <stdio.h>

/**
 *main - cheat sheet for understanding pointers
 *
 *
 *
 *Return: Void.
 */
int main(void)
{
	int int_not_pointer;
	int *int_single_pointer;
	int **int_double_pointer;

	int_not_pointer = 1;
	int_single_pointer = &int_not_pointer;
	int_double_pointer = &int_single_pointer;

	printf("\n\nFROM CONCRETE TO ABSTRACT\n_________________________\n");
	printf("\n\n%d = Value\n%p = Address (pointer)\n%p = Address of pointer(double pointer)\n%p = Address of double pointer",int_not_pointer, &int_not_pointer, &int_single_pointer, &int_double_pointer);

	printf("\n\n\nWHEN CALLED IN VARIOUS WAYS\n");
	printf("___________________________");
	/* int not pointer */
	printf("\n\n\n%p = an int that was declared without an asterisk, called with ampersand\n", &int_not_pointer);
	printf("%d = an int that was declared without an asterisk, called as is\n", int_not_pointer);
	printf("NA = an int that was declared without an asterisk, called with one asterisk\n");
	printf("NA = an int that was declared without an asterisk, called with two asterisks\n");

	/* int single pointer */
	printf("\n\n%p = an int that was declared with one asterisk, called with ampersand\n", &int_single_pointer);
	printf("%p = an int that was declared a single pointer, called as is\n", int_single_pointer);
	printf("%d = an int that was declared a single pointer, called with one asterisk\n", *int_single_pointer);

	/* int double pointer */
	printf("\n\n%p =  an int that was declared a double pointer, called with ampersand\n", &int_double_pointer);
	printf("%p = an int that was declared a double pointer, called as is\n", int_double_pointer);
	printf("%p = an int that was declared a double pointer, called with one asterisk\n", *int_double_pointer);
	printf("%d = an int that was declared a double pointer, called with two asterisks\n\n\n", **int_double_pointer);

	return (0);
}
