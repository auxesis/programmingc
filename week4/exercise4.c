#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 100

int main() {
  int string[STRING_SIZE];
  int count = 0;
  char c; 

  while ((c = getchar()) != '\n') {
    string[count] = c;

    if (count > STRING_SIZE) {
      printf("Truncating input at %d characters\n", STRING_SIZE);
      break;
    }

    count += 1;
  }

  for (count = count - 1; count >= 0; count--) {
    printf("%c", string[count]);
  }
  printf("\n");

  return 0;
}
