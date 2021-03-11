#include <stdio.h>

int sum(int upper, int lowest);

int main(void) {
  int upper,lowest;
  while (upper >= lowest) {
  printf("Enter lower and upper integer limits: ");
  scanf("%d %d", &upper, &lowest);
  printf("The sums of the squares from %d to %d is %d\n", lowest, upper, sum(upper, lowest));
  }
  return 0;
}

int sum(int upper, int lowest){
    int res;
    for (int i=lowest;i<=upper;i++) {
        res += i * i;
    }
    return res;
}


