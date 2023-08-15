#include <stdio.h>
/** main - A c program that prints char
 * Return: a (successsful)
 */

int main(void)
{
	char c;
	
	for (c = 'z'; c >= 'a'; c--) {
	putchar(c);
	}
	
	putchar('\n');
	
	return 0;
}
