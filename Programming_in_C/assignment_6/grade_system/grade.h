#ifndef GRADE_H
#define GRADE_H

// Global variable declaration (defined in grade.c)
extern int passingMark;

// Function prototypes
int calculateTotal(int a, int b, int c);
float calculateAverage(int total);
char getLetterGrade(float average);
void printReport(int total, float average, char grade);
void demonstrateScope();

#endif
