#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN}; // Define an enum for traffic light states


int main(){

    enum TrafficLight currentLight = YELLOW;

    switch (currentLight){

    case RED:
        printf("Stop! The light is red.\n");
        break;
    case YELLOW:
        printf("Caution! the is yellow.\n");
        break;
    case GREEN:
        printf("Go! The light is green.\n");
        break;
    }

return 0;
}
