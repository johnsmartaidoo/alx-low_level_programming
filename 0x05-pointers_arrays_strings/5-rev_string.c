void rev_string(char *s) {
    int len = 0; // initialize the length to 0
    while (*s != '\0') { // loop until the null terminator is reached
        len++; // increment the length
        s++; // advance the pointer to the next character
    }
    s--; // move the pointer back to the last character
    int i = 0; // initialize the index to 0
    while (i < len / 2) { // loop until half the string has been swapped
        char temp = s[i]; // temporarily store the current character
        s[i] = s[len - i - 1]; // replace the current character with its counterpart
        s[len - i - 1] = temp; // replace the counterpart with the current character
        i++; // move to the next character
    }
}
