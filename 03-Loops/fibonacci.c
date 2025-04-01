#include <stdio.h>

void fibonacci_for(int n);
void fibonacci_while(int n);
void fibonacci_do_while(int n);

int main() {
    int n;
    
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    
    printf("\nUsing for loop:\n");
    fibonacci_for(n);
    
    printf("\nUsing while loop:\n");
    fibonacci_while(n);
    
    printf("\nUsing do-while loop:\n");
    fibonacci_do_while(n);
    
    return 0;
}

void fibonacci_for(int n) {
    // Implement Fibonacci using for loop
}

void fibonacci_while(int n) {
    // Implement Fibonacci using while loop
}

void fibonacci_do_while(int n) {
    // Implement Fibonacci using do-while loop
}