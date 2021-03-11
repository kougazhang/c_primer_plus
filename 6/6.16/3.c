#include <stdio.h>

int main(void) {
    for (char i = 'F'; i >= 'A'; i =(char)((int)i-1)) {
        for (char n = 'F'; n >= i; n= (char)((int)n-1)) {
                printf("%c", n);
        }
        printf("\n");
    }
  return 0;
}

