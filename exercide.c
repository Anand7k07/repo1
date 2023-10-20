#include <stdio.h>

int main() {
    int number = 6;  // Set the number to 6

    // Print the table header
    printf("Table of %d:\n", number);

    // Calculate and print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
