#include <stdio.h>

int main(void) {
  int x,y;
  printf("This program computes moduli.\n");
  while (x> 0 || y > 0){
      printf("Enter an integer to serve as the second operand: ");
      scanf("%d", &y);
      printf("Now enter the first operand: ");
      scanf("%d", &x);
      printf("%d %% %d is %d\n", x, y, x%y);
  }
  return 0;
}

