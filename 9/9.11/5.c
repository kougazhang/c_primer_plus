#include <stdio.h>

void larger_of(double*, double*);

int main(void) {
  double x, y;
  scanf("%lf %lf", &x, &y);
  larger_of(&x, &y);
  printf("x:%lf, y:%lf\n", x, y);
  return 0;
}

void larger_of(double*x, double*y) {
    int temp;

    if (*x > *y) {
        printf("x is bigger, x %f, y %f\n", *x, *y);
        temp = *x;
    } else {
        temp = *y;
    }

    *x = temp;
    *y = temp;
}
