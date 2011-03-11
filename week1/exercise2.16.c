
#include <stdio.h>

int main() {

        int n1, n2, sum, product, difference, quotient, remainder;

        printf("Enter first number:\t");
        scanf("%d", &n1);

        printf("Enter second number:\t");
        scanf("%d", &n2);

        sum        = n1 + n2;
        product    = n1 * n2;
        difference = abs(n1 - n2);
        quotient   = n1 / n2;
        remainder  = n1 % n2; 

        printf("Sum is %d\n", sum);
        printf("Product is %d\n", product);
        printf("Difference is %d\n", difference);
        printf("Quotient is %d\n", quotient);
        printf("Remainder is %d\n", remainder);

        return 0;
}
