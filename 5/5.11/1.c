#include <stdio.h>
#define PER_MIN 60

int main(void) {
  int mins;
  while (mins > 0) {
      scanf("%d", &mins);
      int hour = mins / PER_MIN;
      int minute = mins % PER_MIN;
      printf("%d %d\n", hour, minute);
  }
  return 0;
}

