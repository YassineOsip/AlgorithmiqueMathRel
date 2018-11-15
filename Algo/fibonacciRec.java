  public static long fibonacci(int n, long a, long b) {
      return (n > 0) ? fibonacci(n - 1, b, a + b) : a;       
  }