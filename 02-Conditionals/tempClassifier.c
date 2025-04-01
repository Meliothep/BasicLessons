#include <stdio.h>

int main() {
    float temperature;
    char scale;
    
    // Get input from user
    printf("Enter temperature value: ");
    scanf("%f", &temperature);
    
    printf("Enter scale (C for Celsius, F for Fahrenheit): ");
    scanf(" %c", &scale);  // Note the space before %c to skip whitespace
    
    // Your code here
    
    return 0;
}