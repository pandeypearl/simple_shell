#include "shellby.h"

/**
 * main - execution of the shellby shell
 * @argc: number of input arguments
 * @argv: input arguments array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (isatty(STDIN_FILENO) != 1 || argc > 1)
	{
		non_inter_shellby(argc, argv);
	}
	else
	{
		inter_shellby();
	}

	exit(0);
	return (0);
}
