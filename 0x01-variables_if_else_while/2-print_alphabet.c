#include <stdio.h>
/** main - a c proram that printf in putchar
 */

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++) {
	putchar(c);
	}
	
	putchar('\n');
	
	return 0;
}
