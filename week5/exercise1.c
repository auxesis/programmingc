
#include <stdio.h>
#define STRING_SIZE 100

int main() {
  char string[STRING_SIZE];
  char *pstring = string;
  char c;

  printf("Please enter a string: \n");
  while (1) {
    c = getchar();
    if (c == '\n') {
      break;
    } else {
      *pstring = c;
    }
    pstring++;
  }

  while (1) {
    pstring--;
    c = *pstring;
    printf("%c", c);

    if (pstring == string) {
      break;
    }
  }

  printf("\n");
}
