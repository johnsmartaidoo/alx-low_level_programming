#include <stdio.h>
/** main - The Program uses two for loop to print
 * Return:0 (successful)
 */

int main()
{
    int i, j, digit1, digit2, digit3, digit4;

    for (i = 0; i <= 99; i++) {
        digit1 = i / 10;
        digit2 = i % 10;
        for (j = i; j <= 99; j++) {
            digit3 = j / 10;
            digit4 = j % 10;
            if (i == 0 && j == 0) {
                putchar('0');
                putchar('0');
            } else {
                if (digit1 == 0) {
                    putchar('0');
                    putchar(digit2 + '0');
                } else {
                    putchar(digit1 + '0');
                    putchar(digit2 + '0');
                }
                putchar(' ');
                if (digit3 == 0) {
                    putchar('0');
                    putchar(digit4 + '0');
                } else {
                    putchar(digit3 + '0');
                    putchar(digit4 + '0');
                }
            }
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

return 0;
}
