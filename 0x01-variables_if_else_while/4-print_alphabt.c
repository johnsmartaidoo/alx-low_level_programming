#include <stdio.h>
/** main - A c program that prints putchar
 * Return: c (sucessful)
 */

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++) {
	if (c != 'e' && c != 'q') {
	putchar(c);
	}
	}
	
	putchar('\n');
	
	return 0;
}
