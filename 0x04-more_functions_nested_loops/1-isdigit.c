#include <stdio>
/** main - isupper run fuction
 * Return: 0
 */

int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;  // digit character
    } else {
        return 0;  // not digit character
    }
}
