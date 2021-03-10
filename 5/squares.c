#include <stdio.h>

int main(void) {
  int num = 1;
  while (num < 21) {
      printf("%d %d\n", num, num*num);
      num++;
  }
  return 0;
}

