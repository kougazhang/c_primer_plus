#include <stdio.h>
#define STOP '#'

int main(void) {
  char ch;
  int num = 0;

  while ((ch = getchar()) != STOP) {
      printf("%c %d ", ch, ch);
      num++;
      if (num == 8) {
          printf("\n");
      }
  }
  return 0;
}

