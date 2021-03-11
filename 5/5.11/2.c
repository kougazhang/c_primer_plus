#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);
  int last = num + 10;
  while (num <= last) {
      printf("%d\t", num);
      num++;
  }
  printf("\n");
  return 0;
}

