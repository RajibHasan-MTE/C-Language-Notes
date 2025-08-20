#include <stdio.h>


enum Month {JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER}; // Define an enum for months


int main(){

    enum Month birthMonth = MAY;

    printf("My birth month is %d.\n", birthMonth); // OUTPUTs: my birth month is

    return 0;

}
