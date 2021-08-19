#include <math.h>
#include <stdio.h>

int convert(long long bin_value);

int main() {
    
    long long bin_value;
    
    printf("Enter a binary number: \n");
    
    printf("Binary Value: ");
    scanf("%lld", &bin_value);
    
    printf("%lld is %d in decimal", bin_value, convert(bin_value));
    
    return 0;
}


int convert(long long bin_value) {
    
    int decimal = 0;
    int iterator = 0;
    int remainder;
    
    while (bin_value != 0) {
        remainder = bin_value % 10;
        bin_value /= 10;
        decimal += remainder * pow(2, iterator);
        ++iterator;
    }
    
    return decimal;
}
