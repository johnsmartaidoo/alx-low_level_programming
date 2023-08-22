void puts_half(char *str) {
    int len = strlen(str);
    int mid = (len - 1) / 2;
    int start = len % 2 == 0 ? mid + 1 : mid;
    
    for (int i = start; i < len; i++) {
        _putchar(str[i]);
    }
    _putchar('\n')
}
