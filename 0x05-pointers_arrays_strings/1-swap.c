void swap_int(int *a, int *b) {
    int temp = *a; // save the value of a in a temporary variable
    *a = *b; // assign the value of b to a
    *b = temp; // assign the value of the temporary variable to b
}
