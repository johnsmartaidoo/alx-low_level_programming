#include <stdio.h>
/** main - A c program that uses putchar on the line
 * Return: a-z (successful)
 */

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++) {
	putchar(c);
	}
	
	for (c = 'A'; c <= 'Z'; c++) {
	putchar(c);
	}
	
	putchar('\n');
	
	return 0;
}
