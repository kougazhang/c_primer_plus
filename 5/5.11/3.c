#include <stdio.h>
#define ONE_WEEK 7


int main(void) {
    int days;
while (days > 0 ){
  scanf("%d", &days);
  int weeks = days / ONE_WEEK;
  int leftDay = days % ONE_WEEK;
  printf("%d days are %d weeks, %d days\n", days, weeks, leftDay);
}

 return 0;
}



