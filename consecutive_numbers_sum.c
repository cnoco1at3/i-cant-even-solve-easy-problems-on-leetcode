int consecutiveNumbersSum(int N) {
  int u, i, r = 1;
  N = 2 * N;
  for (u = 2; u < N; ++u) {
    if (u * u > N) break;
  }
  for (i = 2; i < u; ++i) {
    if (((N % i) == 0) && (((N / i + 1 - i) % 2) == 0)) r++;
  }
  return r;
}