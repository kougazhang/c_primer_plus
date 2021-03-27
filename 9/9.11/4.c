#include <stdio.h>

double calcHarmonicAverage(double, double);

int main(void) {
  double x, y;
  scanf("%lf %lf", &x, &y);

  printf("%lf\n", calcHarmonicAverage(x, y));
  return 0;
}

double calcHarmonicAverage(double x, double y) {
    double reciprocalX = 1.0 / x;
    double reciprocalY = 1.0 / y;
    double average = (reciprocalX + reciprocalY) / 2;
    return 1.0 / average;
}
