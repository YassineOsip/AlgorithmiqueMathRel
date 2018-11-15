public static long fibonacci(int n) {
    long i = 0;
    long j = 1;
    long temp;
    for (int k = 0; k < n; k++) {
        temp = i + j;
        i = j;
        j = temp;
    }
    return i;
}




