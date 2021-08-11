#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main() {
    int n, d;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    d = isPrime(n);
    if(d == 1) {
        printf("%d is a prime\n", n);
    } else {
        printf("%d is not a prime\n", n);
    }

    return 0;
}

int isPrime(n) {
    int iterator;
    int d = 1;
    int root;
    
    root = sqrt(n);
    for(iterator = 2; iterator <= root; ++iterator) {
        if(n % iterator == 0) {
            d = 0;
            break;
        }
        
    }
    return d;
}
