#include <stdio.h>
#include "grade.h"

//This is the global variable
int passingMark = 60;

int calculateTotal(int a, int b, int c)
{
    return a + b + c;
}

float calculateAverage(int total)
{
    return total / 3.0;
}

char getLetterGrade(float average)
{
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

void printReport(int total, float average, char grade)
{
    printf("\n--- Student Grade Report ---\n");
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Letter Grade: %c\n", grade);
}

int getGlobalPassingMark()
{
    return passingMark;
}

void demonstrateScope()
{
    int passingMark = 50; //This is the local variable

    printf("\n--- Scope Demonstration ---\n");
    printf("Local passingMark: %d\n", passingMark);
    printf("Global passingMark: %d\n", getGlobalPassingMark());
}
