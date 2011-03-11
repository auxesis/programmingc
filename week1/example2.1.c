#include <stdio.h>

int main() {
        int n1, n2, n3, sum;

        printf("Enter first integer:\t");
        scanf("%d", &n1);

        printf("Enter second integer:\t");
        scanf("%d", &n2);

        printf("Enter third integer:\t");
        scanf("%d", &n3);

        sum = n1 + n2 + n3; 
        printf("Sum is %d\n", sum);

        return 0;
}
