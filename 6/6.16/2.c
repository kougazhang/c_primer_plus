#include <stdio.h>

int main(void) {
    for (int i=0;i<5;i++) {
        for(int n = 0; n <= i; n++) {
            printf("$");
        }
        printf("\n");
    }
  return 0;
}

