#include <stdio>
/** main - program that printf
 * Return: 0
 */

void print_line(int n) {
    if (n <= 0) {
        _putchar('\n'); // print the new line character and exit
        return;
    }
    int i;
    for (i = 0; i < n; i++) {
        _putchar('_'); // print the underscore character
    }
    _putchar('\n'); // print the new line character
}
