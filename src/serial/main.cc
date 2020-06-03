#include "../common/definition.h"

double trapezoid(double x0, double xn, long n) {
  double h = (xn - x0) / n;
  double acum = 0;

  for(long i = 1; i < n; ++i) {
    acum += fs(x0 + h * i);
  }

  return (h / 2) * (fs(x0) + 2 * acum + fs(xn));
}

int main() {
  double a, b;
  a = LOWER_LIMIT;
  b = UPPER_LIMIT;
  long n = N;
  const double t0 = omp_get_wtime();
  double result =  trapezoid(a, b, n);
  const double t1 = omp_get_wtime();
  printf("Time(sec): %f\n", t1 - t0);
  print_result(a, b, n, result);
}
