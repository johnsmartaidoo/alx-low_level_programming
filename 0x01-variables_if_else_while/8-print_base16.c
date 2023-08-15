#include <stdio.h>
/** main - a c program that uses for to print in base 16
 * Return:1 (successful)
 */

int main(void)
{
	char c;
	
	for (c = '0'; c <= '9'; c++) {
	putchar(c);
	}
	
	for (c = 'a'; c <= 'f'; c++) {
	putchar(c);
	}
	
	putchar('\n');
	
	return 0;
}
