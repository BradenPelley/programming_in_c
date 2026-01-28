#include <stdio.h>

int main() {
    //Declareing variables
    char fullName[50];
    int age;
    float favoriteNumber;

    //Asking for the users input
    printf("Enter your full name: ");
    scanf(" %[^\n]", fullName);   //Reads full name including spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your favorite number or GPA: ");
    scanf("%f", &favoriteNumber);

    // Display formatted output
    printf("\n\n");
    printf("====================================\n");
    printf("\tSTUDENT INFORMATION\n");
    printf("====================================\n\n");

    printf("Name:\t\t\"%s\"\n", fullName);
    printf("Age:\t\t%d\n", age);
    printf("Favorite #:\t%.2f\n\n", favoriteNumber);

    printf("====================================\n");
    printf("Thank you for using the program!\\\n");
    printf("====================================\n");
    printf("====================================\n");

    return 0;
}
