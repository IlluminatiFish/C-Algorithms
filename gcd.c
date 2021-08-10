#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;
    
    printf("Enter two positive integers you would like to get the GCD of:\n");
    printf("Value A: ");
    scanf("%d", &a);
    printf("Value B: ");
    scanf("%d", &b);
    printf("GCD of %d and %d is %d", a, b, gcd(a, b));
    return 0;


}

int gcd(int a, int b) {
    
    if(b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
    
}
