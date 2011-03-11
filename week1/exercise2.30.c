
#include <stdio.h>

int main() {
        int number, n1, n2, n3, n4, n5; 

        printf("Please enter a 5 digit number: ");
        scanf("%d", &number);
        
        n1 = number / 10000;
        n2 = number / 1000 % 10;
        n3 = number / 100 % 10;
        n4 = number / 10 % 10;
        n5 = number / 1 % 10;

        printf("%d   ", n1);
        printf("%d   ", n2);
        printf("%d   ", n3);
        printf("%d   ", n4);
        printf("%d\n",  n5);
        return 0;
}
