#include <stdio.h>


int main() {

    // NOTE: This will only work with the amount of numbers defined in the braces below no matter how many numbers you give it
    int array[100], element_count, counter, index, swap;

    printf("Enter number of elements:\n");
    scanf("%d", &element_count);

    printf("Enter %d integers:\n", element_count);

    for(counter=0; counter < element_count; counter++) {
        scanf("%d", &array[counter]);
    }

    for(counter=0; counter < element_count-1; counter++) { 
        for(index=0; index < element_count-counter; index++) {
            if(array[index] > array[index+1]) {
                swap = array[index];
                array[index] = array[index+1];
                array[index+1] = swap;

            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for(counter=0; counter < element_count; counter++) {
        printf("%d\n", array[counter]);
    }
    return 0;
}
