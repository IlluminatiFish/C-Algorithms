#include <math.h>
#include <stdio.h>

int convert(long long n);

int main() {
    
    long long n;
    
    printf("Enter a binary number: \n");
    
    printf("Binary Value: ");
    scanf("%lld", &n);
    
    printf("%lld is %d in decimal", n, convert(n));
    
    return 0;
}


int convert(long long n) {
    
    int decimal = 0;
    int iterator = 0;
    int remainder;
    
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, iterator);
        ++iterator;
    }
    
    return decimal;
}
