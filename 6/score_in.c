#include <stdio.h>
#define SIZE 10
#define PAR 72

int main(void) {
  int index, score[SIZE];
  int sum = 0;
  float average;

  printf("Enter %d golf scores:\n", SIZE);

  for (index = 0; index < SIZE; index++) {
      printf("%5d\n", score[index]);
  }

  for (index = 0; index < SIZE; index++) {
      sum += score[index];
      average = (float)sum/SIZE;
      printf("Sum of scores = %d, average = %.2\n", sum, average);
  }

  return 0;
}

