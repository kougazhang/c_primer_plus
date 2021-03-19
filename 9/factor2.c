#include <stdio.h>

long fact(int n);

int main(void) {
  int num;
  scanf("%d", &num);
  printf("%ld\n", fact(num));
  return 0;
}

long fact(int n) {
    long ans;

    if (n > 1) {
        ans = n * fact(n - 1);
    } else {
        ans = 1;
    }
   
    return ans;
}

