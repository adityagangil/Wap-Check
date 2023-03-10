#include <stdio.h>

int isPrime(int num);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(isPrime(num) == 1) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

int isPrime(int num) {
    int i;
    if(num <= 1) {
        return 0;
    }

    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
}
