#include <stdio.h>

int main() {
    int choice;
    printf("Choose fuel type (1: Petrol, 2: Diesel, 3: Electric): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You chose Petrol.\n");
            break;
        case 2:
            printf("You chose Diesel.\n");
            break;
        case 3:
            printf("You chose Electric.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}