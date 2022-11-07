#include <stdio.h>

/**
 * main - printss it's name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contain the program command line arguments.
 * Return: 0 - success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
