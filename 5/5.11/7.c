#include <stdio.h>

void calcCube(double x);

int main(void) {
  double d;
  scanf("%lf", &d);
  calcCube(d);
  return 0;
}

void calcCube(double x){
    printf("%lf\n", x*x*x);
}

