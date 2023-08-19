#include <stdio>
/** main - print what you see
 * Return: Always 0
 */

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n'); // print the new line character and exit
        return;
    }
    int i, j;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= i; j++) {
            _putchar('#'); // print the triangle character
        }
        _putchar('\n'); // print the new line character
    }
}
