#include <stdio.h>
#include <strings.h>

void calc(double x, double y);

int main(void) {
  double x,y;
  char flag[20];
  while (1){
   scanf("%s", flag);
   if (strlen(flag) > 0) {
       break;
   }
   scanf("%lf %lf", &x, &y);
   calc(x, y);
   return 0;
  }
}

void calc(double x, double y){
    printf("%lf\n", (x-y)/(x*y) );
}

