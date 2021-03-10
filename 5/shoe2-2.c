#include <stdio.h>
#define SCALE 0.333
#define ADJUST 7.31

int main(void) {
  float foot;
  float shoe = 3.0;
  while (++shoe < 18.5){
      foot = SCALE*shoe+ADJUST;
      printf("%10.1f %20.2f inches\n", shoe, foot);
  }
  return 0;
}

