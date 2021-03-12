#include <stdio.h>

int main(void) {
  int num;
  int even = 0;
  int odd = 0 ;

  while(num != 0){
      scanf("%d", &num);
      if (num % 2 == 0) {
          even++;
      } else {
          odd++;
      }
      printf("%d\n", num);
  }

  printf("even %d, odd %d\n", even, odd);
  return 0;
}

