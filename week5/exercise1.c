
#include <stdio.h>
#define STRING_SIZE 100

int main() {
  char string[STRING_SIZE];
  char *pstring = string;
  char c;

  printf("Please enter a string: \n");
  fgets(pstring, STRING_SIZE, stdin);

  printf("%d\n", sizeof(pstring));
  printf("%d\n", sizeof(string));

  while (c = *pstring++) {
    printf("%c", c);
  }

  *pstring--;
  *pstring--;
  while (c = *pstring--) {
    if (c != '\n') {
      printf("%c", c);
    }
  }

  printf("\n");
}
