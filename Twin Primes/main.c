#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int countTwinPrimes(int start, int end) {
    int count = 0;

    for (int i = start; i <= end - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            count++;
            printf("(%d, %d)\n", i, i + 2);
        }
    }

    return count;
}

int main() {
    int start, end;

    printf("Enter the range (start end): ");
    while (scanf("%d %d", &start, &end) != 2 || start < 0 || end < 0) {
        printf("Invalid input. Enter the range (start end): ");
        while (getchar() != '\n');  // Clear input buffer
    }

    printf("Twin primes in the range %d to %d:\n", start, end);
    int twinPrimesCount = countTwinPrimes(start, end);
    printf("Total twin primes: %d\n", twinPrimesCount);

    return 0;
}
