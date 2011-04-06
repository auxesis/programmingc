
#include <stdio.h>

int main() {
  char *a = "h";
  printf("%p\n", a);
  printf("%p\n", a++);
  printf("%p\n", a++, a++);
  printf("%p\n", a++, a++, a++);
  scanf("%s", a);
  printf("%s\n", a);
}
