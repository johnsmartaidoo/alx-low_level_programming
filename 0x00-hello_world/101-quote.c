#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main -  A C program that works
 * Return: 1 (successful)
 */

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int fd = STDERR_FILENO;
    write(fd, message, strlen(message));
    return 1;
}
