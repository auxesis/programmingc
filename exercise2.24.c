
#include <stdio.h>

int main() {
        int integer;

        printf("Enter an integer: ");
        scanf("%d", &integer);

        if ( integer % 2 > 0 ) {
                printf("That's odd.\n");
        } else {
                printf("We're even.\n");
        }

        return 0;
}
