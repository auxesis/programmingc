#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define CHARACTER_SIZE 128

int main() {
  int c, j, lower;
  int i = 0;
  int characters[CHARACTER_SIZE] = {0};

  while ((c = getc(stdin)) != EOF) {
    lower = tolower(c);
    ++characters[lower];
  }

  for (i=0; i < CHARACTER_SIZE; i++) {
    if (characters[i] > 0 && isalpha(i)) {
      printf("| %c | %10d |\n", i, characters[i]);
    }
  }
}
