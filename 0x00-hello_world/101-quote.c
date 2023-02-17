#include <unistd.h>

/**
 * main - print the string in write function
 *
 * Description: using the main function 
 * the program prints and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: Always 1(Success)
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
