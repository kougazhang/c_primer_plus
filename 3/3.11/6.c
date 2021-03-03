#include <stdio.h>

int main(void) {
  int quart;
  scanf("%d", &quart);
  long long int num = quart * 950 / 3.0e-23;
  printf("%lld\n", num);
  return 0;
}

