void puts2(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i += 2) {
        _putchar(str[i]);
    }
    _putchar('\n');
}
