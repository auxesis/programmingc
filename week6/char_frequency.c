#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define MAX_PARAGRAPH_SIZE 16384
#define CHARACTER_SIZE 1024

int main() {
  char paragraph[MAX_PARAGRAPH_SIZE];
  char *pparagraph = paragraph;
  int  c, i, j;
  int  characters[CHARACTER_SIZE];

  fgets(paragraph, MAX_PARAGRAPH_SIZE, stdin);

  while (*pparagraph++) {
    c = tolower(*pparagraph);
    ++characters[c];
  }

  for (i=0; i < CHARACTER_SIZE; i++) {
    if (characters[i] > 0 && isalpha(i)) {
      printf("%c | ", i);
      for (j=0; j < characters[i]; j++) {
        printf("%c", i);
      }
      printf("\n");
    }
  }
}
