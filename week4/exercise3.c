#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
  int count;
  int array[ARRAY_SIZE];
  int input;
  int sum, average, max, min;

  for (count = 0; count < ARRAY_SIZE; count++) {
    scanf("%d", &input);
    array[count] = input;
  }

  for (count = 0; count < ARRAY_SIZE; count++) {
    sum += array[count];

    if (count == 0 || array[count] > max) {
      max = array[count];
    }

    if (count == 0 || array[count] < min) {
      min = array[count];
    }
  }

  average = sum / ARRAY_SIZE;

  printf("Average: %d\n", average);
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
}
