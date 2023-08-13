#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main -  A c programming line that prints to the computer
 * Return: 1;
 */

int main(void)
{
	const char * message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int fd = STDERR_FILENO;

	write(fd, message, strlen(message));
	return (1);
}
