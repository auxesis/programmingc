
#include <stdio.h>

int main() {
        int n1, n2, n3; 
        int sum, average, product, largest, smallest; 

        /* read 3 integers
         * print the sum
         * print the average 
         * print the product
         * print the largest
         * print the smallest */

        printf("Enter three different integers: ");
        scanf("%d%d%d", &n1, &n2, &n3);

        sum      = n1 + n2 + n3;
        average  = (n1 + n2 + n3) / 3; 
        product  = n1 * n2 * n3; 

        if (n1 > n2 && n1 > n3) {
                largest = n1;
        } else if (n2 > n1 && n2 > n3) {
                largest = n2;
        } else if (n3 > n1 && n3 > n2) {
                largest = n3;
        }

        if (n1 < n2 && n1 < n3) {
                smallest = n1;
        } else if (n2 < n1 && n2 < n3) {
                smallest = n2;
        } else if (n3 < n1 && n3 < n2) {
                smallest = n3;
        }

        printf("Sum is %d\n", sum);
        printf("Average is %d\n", average);
        printf("Product is %d\n", product);
        printf("Smallest is %d\n", smallest);
        printf("Largest is %d\n", largest);


        return 0;
}
