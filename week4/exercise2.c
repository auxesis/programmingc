#include <stdio.h>


int main() {
  int x[10];
  int count = 0;

  while (1) {
    x[count] += 1;
    printf("%d %d\n", count, x[count]);
    ++count;
  }
}
