#include <stdio.h>

int main() {
    int choice;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Option One\n");
        printf("2. Option Two\n");
        printf("3. Option Three\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You selected Option One\n");
                break;
            case 2:
                printf("You selected Option Two\n");
                break;
            case 3:
                printf("You selected Option Three\n");
                break;
            case 4:
                printf("Exiting program\n");
                return 0;  // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\e[1;1H\e[2J"); // Console clear
    }
    
    return 0;
}