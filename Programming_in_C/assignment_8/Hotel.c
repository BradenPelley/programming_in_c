#include <stdio.h>

#define FLOORS 3
#define ROOMS 5

void displayMap(int hotel[FLOORS][ROOMS]);
void reserveRoom(int hotel[FLOORS][ROOMS]);

int main() 
{
    int hotel[FLOORS][ROOMS] = {0};   //All of the rooms will start vacant
    int choice;

    while (1)
    {
        printf("\n===== HOTEL RESERVATION SYSTEM =====\n");
        printf("1. Reserve a room\n");
        printf("2. Display room map\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            reserveRoom(hotel);
        }
        else if (choice == 2)
        {
            displayMap(hotel);
        }
        else if (choice == 3)
        {
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void reserveRoom(int hotel[FLOORS][ROOMS])
{
    int floor, room;

    printf("Enter floor number (1-%d): ", FLOORS);
    scanf("%d", &floor);

    printf("Enter room number (1-%d): ", ROOMS);
    scanf("%d", &room);

    //This will validate the range for which room can be reserved
    if (floor < 1 || floor > FLOORS || room < 1 || room > ROOMS)
    {
        printf("Invalid floor or room number.\n");
        return;
    }

    //Adjust for the array index since the array starts at 0
    floor--;
    room--;

    if (hotel[floor][room] == 1)
    {
        printf("Room already reserved. Please choose another room.\n");
    }
    else
    {
        hotel[floor][room] = 1;
        printf("Room successfully reserved!\n");
    }
}

void displayMap(int hotel[FLOORS][ROOMS])
{
    int i, j;

    printf("\n===== ROOM MAP =====\n");

    for (i = 0; i < FLOORS; i++)
    {
        printf("Floor %d: ", i + 1);

        for (j = 0; j < ROOMS; j++)
        {
            if (hotel[i][j] == 1)
                printf("[R] ");
            else
                printf("[V] ");
        }

        printf("\n");
    }
}