#include <stdio.h>

void chline(char, int, int);

int main(void) {
  char ch;
  int i, j;

  ch = getchar();
  scanf("%d %d", &i, &j);

  chline(ch, i, j);
  return 0;
}

void chline(char ch, int i, int j) {
    for (int m = 0; m < j; m++) {
        for (int n = 0; n < i; n++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

