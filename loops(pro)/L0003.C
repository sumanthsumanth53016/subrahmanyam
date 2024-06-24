#include <stdio.h>
int main() {
    int numbers[10];
    int even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0;

    // Reading 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Processing the numbers to find sums and counts of even and odd numbers
    for(int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_sum += numbers[i];
            even_count++;
        } else {
            odd_sum += numbers[i];
            odd_count++;
        }
    }

    // Displaying the results
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Count of even numbers: %d\n", even_count);
    printf("Sum of odd numbers: %d\n", odd_sum);
    printf("Count of odd numbers: %d\n", odd_count);

    return 0;
}

