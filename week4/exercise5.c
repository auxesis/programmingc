#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 100

void reverse_print(char string[]);
void read_and_reverse_lines(void);

int main() {
  read_and_reverse_lines();

  return 0;
}

void reverse_print(char string[]) {
  int length = strlen(string);
  int count;

  printf("%d", length);

  if (length > 0) { 
    for (count = length; count >= 0; count--) {
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
      reverse_print(string);
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

