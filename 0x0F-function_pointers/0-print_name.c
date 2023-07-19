#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints the name with the functioon
 * @name: The name to be printed out
 * @f: The function to be used
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
