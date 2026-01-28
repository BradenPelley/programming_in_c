/*Program Info
Program Name: BMI Calculator
Course: Programming in C
Author: Braden Pelley
Date: January 21, 2026
Description: This program calculates a user's Body Mass Index (BMI) using
their weight in kilograms and height in meters, then displays
the BMI value and corresponding BMI category.*/


#include <stdio.h>

int main() {
    //Declare variables to store weight, height, and BMI
    double weight;
    double height;
    double bmi;

    //Display welcome message
    printf("Welcome to the BMI Calculator\n\n");

    //Ask the user to enter their weight
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weight);

    //Ask the user to enter their height
    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    //Input validation (bonus task)
    if (weight <= 0 || height <= 0) {
        printf("\nError: Weight and height must be positive values.\n");
        return 1;
    }

    //Calculate BMI using the formula: BMI = weight / (height * height)
    bmi = weight / (height * height);

    //Display entered values and BMI
    printf("\nYour weight: %.2f kg\n", weight);
    printf("Your height: %.2f m\n", height);
    printf("Your BMI: %.2f\n", bmi);

    //Determine BMI category
    if (bmi < 18.5) {
        printf("\nCategory: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("\nCategory: Normal weight\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("\nCategory: Overweight\n");
    } else {
        printf("\nCategory: Obese\n");
    }

    return 0;
}
