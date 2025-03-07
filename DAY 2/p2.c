#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to get the nth prime number
int getNthPrime(int n) {
    int count = 0, num = 1;
    while (count < n) {
        num++;
        if (isPrime(num)) count++;
    }
    return num;
}

// Function to find the nth term in the given sequence
int findNthTerm(int n) {
    int index = (n + 1) / 2; // Get the corresponding prime index
    int prime = getNthPrime(index);
    
    // Odd positions (1-based) return prime
    // Even positions return the same as the previous prime
    return (n % 2 == 0) ? prime : getNthPrime(index - 1);
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! n must be a positive integer.\n");
        return 1;
    }

    printf("The %dth term of the series is: %d\n", n, findNthTerm(n));
    return 0;
}
