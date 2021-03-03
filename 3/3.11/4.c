#include <stdio.h>

int main(void) {
  float a;
  scanf("%f", &a);
  printf("Enter a floating-point value: %f\n", a);
  printf("fixed-point notation: %f\n", a);
  printf("exponential notation: %e\n", a);
  printf("p notation:  %#x\n", a);
  return 0;
}

