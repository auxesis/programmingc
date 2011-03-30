
#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

int main() {
  double s1, s2, s3;
  printf("Enter the length of side 1: ");
  scanf("%lf", &s1);

  printf("Enter the length of side 2: ");
  scanf("%lf", &s2);

  s3 = hypotenuse(s1, s2);

  printf("Length of hypotenuse: %.1f\n", s3);
  return 0;
}

double hypotenuse(double a, double b) {
  double c;
  double c_squared;
  c_squared = a * a + b * b;
  c = sqrt(c_squared);
  return c;
}
