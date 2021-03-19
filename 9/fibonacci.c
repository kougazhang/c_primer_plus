#include <stdio.h>

int calc(int n);

int main(void) {
  int num;
  scanf("%d", &num);
  printf("%d\n", calc(num));
  return 0;
}

int calc(int n) {

    if ( n < 2 ){
        return 1;
    } else {
        return calc(n-1) + calc(n-2);
    }
}


