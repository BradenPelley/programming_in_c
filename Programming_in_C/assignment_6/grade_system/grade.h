#ifndef GRADE_H
#define GRADE_H

//Declaring the global variable
extern int passingMark;

//Function prototypes
int calculateTotal(int a, int b, int c);
float calculateAverage(int total);
char getLetterGrade(float average);
void printReport(int total, float average, char grade);
void demonstrateScope();

#endif
