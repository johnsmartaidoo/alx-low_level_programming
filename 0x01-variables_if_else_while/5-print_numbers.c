#include <stdio.h>
/** main - A c program that prints printf
 * Reture: 0 (successful)
 */

int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++) {
	putchar(i + '0');
	}
	
	putchar('\n');
	
	return 0;
}
