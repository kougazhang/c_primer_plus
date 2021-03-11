#include <stdio.h>

int main(void) {
  char end;
  scanf("%c", &end);
 
  for(int i='A'; i<=end; i++){
      for(int n='A'; n<i; n++){
          printf("%c", n);
      }
      for(int m=i; m>='A';m--){
          printf("%c", m);
      }
      printf("\n");
  }

  return 0;
}

