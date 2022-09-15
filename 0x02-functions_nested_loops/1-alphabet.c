#include "main.h"

/*
 * print_alphabet(void)  - Print in lower case followed by \n.
 *
 */

void print_alphabet(void) /* Prints in lowercase followed by newline*/
{
	char small;

	for (small = 'a'; small <= 'z' ; small++)
	_putchar (small);
	_putchar ('\n');

}
