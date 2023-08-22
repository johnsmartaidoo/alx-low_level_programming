int _strlen(char *s) {
    int len = 0; // initialize the length to 0
    while (*s != '\0') { // loop until the null terminator is reached
        len++; // increment the length
        s++; // advance the pointer to the next character
    }
    return len; // return the length of the string
}
