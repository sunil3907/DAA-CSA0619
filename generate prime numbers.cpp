#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d, ", num);
        }
    }
    printf("\n");
    return 0;
}
