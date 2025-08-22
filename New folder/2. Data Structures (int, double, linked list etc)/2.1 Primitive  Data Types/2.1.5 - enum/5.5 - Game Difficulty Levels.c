#include <stdio.h>

enum Difficulty {EASY = 1, MEDIUM = 2, HARD = 3, EXPERT = 4}; // Define an enum for difficulty levels



int main(){

    enum Difficulty playerLevel = HARD;


    printf("Player is playing at difficulty level %d.\n", playerLevel);


    return 0;

}
