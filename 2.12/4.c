#include <stdio.h>

void printOnce(void);
void printLast(void);

int main(void) {
  printOnce();
  printLast();
  return 0;
}

void printOnce(void){
    char *words = "For he's a jolly good fellow!\n";
    printf("%s", words);
    printf("%s", words);
    printf("%s", words);
}

void printLast(void){
    printf("Which nobody can deny!\n");
}

