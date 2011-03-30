#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 100

void reverse_print(char string[], int count);
void read_and_reverse_lines(void);

int main() {
  read_and_reverse_lines();

  return 0;
}

void reverse_print(char string[], int count) {
  if (count != 0) { 
    for (count = count - 1; count >= 0; count--) {
      printf("%c", string[count]);
    }
    printf("\n");
  }

  return; 
}

void read_and_reverse_lines() {
  char string[STRING_SIZE];
  int count = 0;
  char c; 

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      reverse_print(string, count);
      count = 0;
      continue;
    } else {
      string[count] = c;
    }

    if (count > STRING_SIZE) {
      printf("Truncating input at %d characters\n", STRING_SIZE);
      break;
    }

    count += 1;
  }
}

