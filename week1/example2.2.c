
#include <stdio.h>

int main() {
        int n1, n2, sum, difference;

        printf("Enter first integer:\t");
        scanf("%d", &n1);

        printf("Enter second integer:\t");
        scanf("%d", &n2);

        sum = n1 + n2; 
        printf("Sum is %d\n", sum);

        difference = n1 - n2; 
        printf("Difference is %d\n", abs(difference));

        return 0;
}
