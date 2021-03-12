#include <stdio.h>
#define STOP '#'

int main(void) {
  char ch;

  while ((ch = getchar()) != STOP) {
      if (ch == '.') {
          putchar('!');
      } else if (ch == '!') {
          printf("!!");
      } else {
          putchar(ch);
      }
  }
  return 0;
}

