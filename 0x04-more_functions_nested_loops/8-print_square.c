#include <stdio>
/**main - print a line 
 * Return: 0
 */

void print_square(int size) {
    if (size <= 0) {
        _putchar('\n'); // print the new line character and exit
        return;
    }
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            _putchar('#'); // print the square character
        }
        _putchar('\n'); // print the new line character
    }
}
