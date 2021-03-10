#include <stdio.h>

int main(void) {
  float perSec;
  float fileSize;
  scanf("%f %f", &perSec, &fileSize);
  printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", perSec, fileSize, fileSize/perSec);
  return 0;
}

