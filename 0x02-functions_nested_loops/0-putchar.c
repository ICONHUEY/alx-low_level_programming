#include "main.h"
/**
 * main - Prints the string "_putchar" from a character array.
 * return: 0 on success.
 */
int main(void)
{
	cher *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n')

	return (0);
}
