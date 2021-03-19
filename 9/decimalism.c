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
    if (n > 10) {
        calc(n/10);
        printf("%d", n%10);
    } else {
        printf("%d", n);
    }
}


