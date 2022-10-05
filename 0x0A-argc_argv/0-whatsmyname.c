#include <stdio.h>

/**
 * main - program prints its own name.
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argc--; /*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
