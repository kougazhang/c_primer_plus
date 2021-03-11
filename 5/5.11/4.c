#include <stdio.h>
#define PER_INCH 0.39
#define PER_FEET 0.03

int main(void) {
  float height;
  while (height > 0) {
      printf("Enter a height in centimeters: ");
      scanf("%f", &height);
      printf("%1.1f cm = %d feet, %1.1f inches\n", height, (int)(height*PER_FEET), height*PER_INCH);
  }
  printf("bye");
  return 0;
}

