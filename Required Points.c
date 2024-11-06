#include <stdio.h>

int main() {
    int A, B;
    
    // Read the input values for A and B
    scanf("%d %d", &A, &B);
    
    // Calculate the number of special attacks
    int number_of_attacks = B / A;
    
    // Print the result
    printf("%d\n", number_of_attacks);
    
    return 0;
}