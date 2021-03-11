#include <stdio.h>

void count(int days);

int main(void) {
  int days;

  while (days > 0) {
      scanf("%d", &days);
      count(days);
  }
  
  return 0;
}

void count(int days){
    int sum;
    while (days > 0) {
        sum += days*days;
        days--;
    }
    printf("%d\n", sum);
}


