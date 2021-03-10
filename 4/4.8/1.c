#include <stdio.h>

int main(void) {
  char firstName[30];
  char lastName[30];

  scanf("%s %s", firstName, lastName);
  printf("%s,%s\n", firstName, lastName);
  return 0;
}

