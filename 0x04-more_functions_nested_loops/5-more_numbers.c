#include <stdio>
/** main - the function that prints 
 * Return: 0
 */

void more_numbers(void) {
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 14; j++) {
            if (j >= 10) {
                _putchar((j / 10) + '0'); // print the tens digit
            }
            _putchar((j % 10) + '0'); // print the ones digit
        }
        _putchar('\n'); // print the new line character
    }
}
