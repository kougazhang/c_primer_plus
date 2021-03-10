#include <stdio.h>
#include <string.h>

int main(void) {
  char firstName[30];
  char lastName[30];

  scanf("%s %s", firstName, lastName);
  printf("%s %s\n",firstName, lastName);
  printf("%lu %10ld\n", strlen(firstName), strlen(lastName));
  printf("%-10lu %ld\n", strlen(firstName), strlen(lastName));
  return 0;
}

