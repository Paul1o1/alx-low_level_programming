#include <stdio.h>
#include <unistd.h>
/**
 * main - print exactly and the peice of art is useful
 *
 * return - always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}