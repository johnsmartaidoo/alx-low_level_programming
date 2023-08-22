char *_strcpy(char *dest, char *src) {
    int i = 0; // initialize a counter variable
    while (src[i] != '\0') { // copy each character from src to dest
        dest[i] = src[i];
        i++; // increment the counter variable
    }
    dest[i] = '\0'; // add the terminating null byte to dest
    return dest; // return a pointer to dest
}
