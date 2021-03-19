#include <stdio.h>

void calc(int n);

int main(void) {
  int num;
  scanf("%d", &num);
  calc(num);
  printf("\n");
  return 0;
}

void calc(int n) {
    if (n >= 2) {
        calc(n/2);
        printf("%d", n%2);
    } else {
        printf("%d", n);
    }
}


