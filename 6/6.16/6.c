#include <stdio.h>

int main(void) {
  int s;
  int e;
  scanf("%d %d", &s, &e);

  for (int i=s; i<=e; i++) {
      int square = i * i;
      printf("%d, %d, %d\n", i, square, square * i);
  }
  return 0;
}

