#include <stdio.h>

int main(void) {
  int age;
  scanf("%d", &age);
   long yearInSec = 3.156e7;
   long ageInSec = yearInSec * age;
  printf("%ld\n", ageInSec);
  return 0;
}

