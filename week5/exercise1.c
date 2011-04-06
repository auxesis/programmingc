
#include <stdio.h>
#define STRING_SIZE 100

int main() {
  char string[STRING_SIZE];
  char *pstring = string;
  char c;

  printf("Please enter a string: \n");
  while (*pstring++) {
    c = getchar();
    if (c == '\n') {
      break;
    } else {
      *pstring = c;
    }
  }

  while (c = *pstring--) {
    printf("%c", c);
  }

  printf("\n");
}
