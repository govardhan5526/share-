#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 40) {
        printf("Student has passed the exam.\n");
    }
    return 0;
}