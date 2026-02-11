#include <stdio.h>
#include "grade.h"

int main()
{
    int mark1, mark2, mark3;

    printf("Enter first mark: ");
    scanf("%d", &mark1);

    printf("Enter second mark: ");
    scanf("%d", &mark2);

    printf("Enter third mark: ");
    scanf("%d", &mark3);

    int total = calculateTotal(mark1, mark2, mark3);
    float average = calculateAverage(total);
    char grade = getLetterGrade(average);

    printReport(total, average, grade);

    demonstrateScope();

    return 0;
}
