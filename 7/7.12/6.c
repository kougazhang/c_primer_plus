#include <stdio.h>
#define STOP '#'

int main(void) {
  char ch;
  char before;
  int counter = 0;

  while ((ch = getchar()) != STOP) {
      if (before == 'e' && ch == 'i') {
          counter++;
      }
      before = ch;
  }

  printf("%d\n", counter);
  return 0;
}

