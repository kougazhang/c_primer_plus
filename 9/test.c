#include <stdio.h>

int main(void) {
  int x = 1;
  int y = 2;

  x = y;
  y = x;

  printf("x %d, y %d\n",x, y);
  return 0;
}

