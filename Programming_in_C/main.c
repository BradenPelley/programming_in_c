//Braden Pelley - Programming In C Final Project
//This program is a rock paper scissors game where you pick one of 3 choices, 
//and the computer randomly selects one of the 3 choices, 
//and the program decides who wins based off the code telling it which one beats what.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//This is the function to get the computer's choice.
char getComputerChoice() {
    int n = rand() % 3; // 0, 1, or 2

    if (n == 0)
        return 's'; //Rock
    else if (n == 1)
        return 'p'; //Paper
    else
        return 'z'; //Scissors
}

//This is the function to get a valid user input.
char getUserChoice() {
    char choice;

    while (1) {
        printf("\nEnter your choice:\n");
        printf("s = Rock\np = Paper\nz = Scissors\n");
        printf("Your choice: ");
        scanf(" %c", &choice); //The space before %c fixes any input issues

        if (choice == 's' || choice == 'p' || choice == 'z') {
            return choice;
        } else {
            printf("Invalid input! Please try again.\n");
        }
    }
}

//This is the function to determine the winner.
int determineWinner(char you, char computer) {
    if (you == computer)
        return -1;

    if (you == 's' && computer == 'p')
        return 0;
    else if (you == 'p' && computer == 's')
        return 1;

    if (you == 's' && computer == 'z')
        return 1;
    else if (you == 'z' && computer == 's')
        return 0;

    if (you == 'p' && computer == 'z')
        return 0;
    else if (you == 'z' && computer == 'p')
        return 1;

    return -2; //This will safety return in case there are any issues (This should never happen).
}

//This is the function to display the result.
void displayResult(int result, char you, char computer) {
    printf("\nYou chose: %c | Computer chose: %c\n", you, computer);

    if (result == -1) {
        printf("Game Draw!\n");
    } else if (result == 1) {
        printf("You Win!\n");
    } else {
        printf("You Lose!\n");
    }
}

int main() {
    char you, computer;
    int result;
    char playAgain;
    int userScore = 0, computerScore = 0;

    srand(time(NULL));

    printf("=== Rock Paper Scissors Game ===\n");

    do {
        you = getUserChoice();
        computer = getComputerChoice();

        result = determineWinner(you, computer);

        displayResult(result, you, computer);

        //This is the score tracking.
        if (result == 1)
            userScore++;
        else if (result == 0)
            computerScore++;

        printf("\nScore -> You: %d | Computer: %d\n", userScore, computerScore);

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nFinal Score -> You: %d | Computer: %d\n", userScore, computerScore);
    printf("Thanks for playing!\n");

    return 0;
}