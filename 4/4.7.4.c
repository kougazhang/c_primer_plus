#include <stdio.h>
#define B "booboo"
#define X 10

int main(void) {
  int age;
  char name[30];
  printf("Please enter your first name.\n");
  scanf("%s", name);
  printf("All right, %s, what's your age?\n", name);
  scanf("%d", &age);

  int xp = age + X;

  printf("That's a %s! You must be as least %d.\n", B, xp);

  return 0;
}

