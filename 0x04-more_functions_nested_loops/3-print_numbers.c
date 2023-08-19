#inslude <stdio>
/** something - print something new
 * Return: Always 0
 */

void print_numbers(void) {
    int i;
    for (i = 0; i < 10; i++) {
        _putchar(i + '0'); // print the digit character
    }
    _putchar('\n'); // print the new line character
}
