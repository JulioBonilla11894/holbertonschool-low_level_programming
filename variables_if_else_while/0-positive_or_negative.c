#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed the random number generator
    int n = rand() - RAND_MAX / 2;  // Generate a random number

    printf("The number is: %d\n", n);

    // Check if the number is positive, negative, or zero
    if (n > 0) {
        printf("The number is positive\n");
    } else if (n == 0) {
        printf("The number is zero\n");
    } else {
        printf("The number is negative\n");
    }

    return 0;
}
