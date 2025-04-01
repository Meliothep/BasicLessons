#include <stdio.h>

int main() {
    // Print a 5x5 multiplication table
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%3d", i * j);  // %3d ensures each number takes up 3 spaces
        }
        printf("\n");  // Move to next line after each row
    }
    
    return 0;
}