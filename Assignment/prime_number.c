#include <stdio.h>
#include <math.h>

void isPrime(int n){
    if(n <= 1){
        printf("%d is not a prime number.",n);
    } else if (n == 2){
        printf("%d is a prime number.", n);
    }else if(n % 2 == 0){
        printf("%d is not a prime number.",n);
    } else {
        for (int i = 3; i <= sqrt(n); i = i + 2){
            if(n % i == 0){
                printf("%d is not a prime number.", n);
                return 1;
            }
        }
        printf("%d is a prime number.", n);
    }
}

int main() {
    int n;

    printf("Enter a number:\n");
    scanf("%d", &n);

    isPrime(n);
}