#include <stdio.h>

int main(void) {
  float cup;
  scanf("%f", &cup);
  
  float pint = cup / 2;
  printf("pint: %f\n", pint);
  
  float ounce = cup * 8 ;
  printf("ounce: %f\n", ounce);

  float spoon = ounce * 2;
  printf("spoon: %f\n", spoon);
  
  float teaspoon = spoon * 3;
  printf("teespoon: %f\n", teaspoon);
  return 0;
}

