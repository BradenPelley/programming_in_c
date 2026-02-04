#include <stdio.h>

int main() {
    int floor;
    int room;

    //This loops through floors
    for (floor = 1; floor <= 10; floor++) {

        //This loops through the rooms on each floor
        for (room = 1; room <= 7; room++) {

            //This checks for the booked room
            if (floor == 6 && room == 7) {
                printf("Floor %d Room %d Status: Booked\n", floor, room);
                continue; //This skips the vacant logic for this room
            }

            //This shows that all other rooms are vacant
            printf("Floor %d Room %d Status: Vacant\n", floor, room);
        }
    }

    return 0;
}
