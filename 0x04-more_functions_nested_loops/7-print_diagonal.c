#include <stdio>
/** main - print all
 * Return: Always 0
 */

void print_diagonal(int n) {
    if (n <= 0) {
        _putchar('\n'); // print the new line character and exit
        return;
    }
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            _putchar(' '); // print a space for all positions before the diagonal
        }
        _putchar('\\'); // print the diagonal character
        _putchar('\n'); // print the new line character
    }
}
