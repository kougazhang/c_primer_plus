#include <stdio.h>

int main(void) {
  char name[30];
  float height;
  scanf("%s %f", name, &height);
  printf("%s, you are %.2f m tall\n", name, height/100);
  return 0;
}

