#include <stdio.h>

/* Find the largest prime multiple of 600851475143 */

int is_prime(int num);

int main() {
    long int a = 600851475143;
    int divisor;
    int count = 0;

    for (divisor = 2; count < 5; divisor++) {
        if (a % divisor == 0) {
            count++;
        }
    }
    divisor = divisor - 1;

    long int num = (600851475143 / divisor);

    for (int i = 0; i <= num; i++) {
        if ((num % i == 0) && is_prime(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}

/**
 *
 * @param num
 * @return 1 if prime.
 * @return 0 if not prime.
 */
int is_prime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0; // Is not prime.
        }
    }
    return 1; // Is prime.
}