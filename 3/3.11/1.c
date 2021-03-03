#include <stdio.h>

int main(void) {
  int a;
  float b;
  float c;
  
  a = 10000000000000000;
  b = 2.2E20;
  c = 2.2E80 + 1.0;
  printf("%d\n", a);
  printf("%f\n", b);
  printf("%f\n", c);
  return 0;
}

