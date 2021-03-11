#include <stdio.h>

int main(void) {
    char start = 'A';
    for (int i=0; i<6; i++) {
        char end = (char)((int)start + i+1);
        for(char n=start; n < end; n=(char)((int)n+1)){
            printf("%c", n);
        }
        printf("\n");
        start = end;
    }
  return 0;
}

