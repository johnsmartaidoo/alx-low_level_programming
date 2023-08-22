void rev_string(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++; 
  	s++;
    }
    s--; 
    int i = 0;
    while (i < len / 2) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
        i++;
    }
}
