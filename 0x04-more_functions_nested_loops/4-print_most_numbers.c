#include <stdio>
/** main - print a program function
 * Reture: 0
 */

oid print_most_numbers(void) {
    int i;
    for (i = 0; i < 10; i++) {
        if (i != 2 && i != 4) {
            _putchar(i + '0'); // print the digit character
        }
    }
    _putchar('\n'); // print the new line character
}
