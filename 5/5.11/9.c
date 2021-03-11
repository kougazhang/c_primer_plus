#include <stdio.h>

void Temperatures(double x);

int main(void) {
  double fahrenheit;
  char flag;

  while (fahrenheit > 0) {
      scanf("%lf", &fahrenheit);
      scanf("%c", &flag);
      if (flag == 'q') {
          break;
      }
      Temperatures(fahrenheit);
  }

  return 0;
}

void Temperatures(double x) {
    const float five = 5.0;
    const float nine = 9.0;
    const float thirtyTwo = 32.0;
    const float balance = 273.16;
    float centigrade = five / nine * (x - 32.0);
    float kelvin = centigrade + balance;
    printf("%0.2f %0.2f %0.2f\n", x, centigrade, kelvin);
}
