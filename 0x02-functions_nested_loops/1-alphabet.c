#include "main.h"

/**
* print_alphabet - Prints alphbets in lowercase, followed by a new line
*
*/

void print_alphabet(void)
{
	char small;

	for (small = 'a'; small <= 'z' ; small++)
	_putchar (small);
	_putchar ('\n');

}
