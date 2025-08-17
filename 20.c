#include <stdio.h>

int main() {
    int choice;
    printf("Beverage Menu:\n");
    printf("1. Tea\n");
    printf("2. Coffee\n");
    printf("3. Juice\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected Tea.\n");
            break;
        case 2:
            printf("You selected Coffee.\n");
            break;
        case 3:
            printf("You selected Juice.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}