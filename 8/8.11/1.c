#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ch;
  FILE *fp;
  char fname[50];

  printf("Please enter the name of file: ");
  scanf("%s", fname);

  fp = fopen(fname, "r");

  if (fp == NULL) {
      printf("Failed to open file.\n");
      exit(1);
  }

  int counter = 0;
  while (getc(fp) != EOF) {
      counter++;
  }
  
  fclose(fp);

  printf("the size of file is %d\n", counter);
  return 0;
}

