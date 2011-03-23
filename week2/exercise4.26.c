#include <stdio.h>

int denominator() {
  static float denominator = 1.0;
  denominator += 2;
  return denominator;
}

int main (void) {

  float pi       = 4.0;
  int   operator = 1;
  int   result;
  int   iteration = 0;
  float term;
  while (result != 314159) {
    iteration++;
    operator *= -1;
    term      = (4.0 / denominator() * operator);
    pi        = pi + term;
    printf("%d: %.10f\n", iteration, pi);

    result = pi * 100000; 
  }
  return 0;
}
