#include <unistd.h>
#define MSG "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, MSG, sizeof(MSG) - 1);
	return (1);
}

