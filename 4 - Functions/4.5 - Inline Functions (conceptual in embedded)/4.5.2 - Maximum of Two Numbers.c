#include <stdio.h>


static inline int max(int a, int b){

    return (a > b) ? a : b;

}

int main(){

    printf("Max of (7, 3) = %d\n", max(7, 3));
    printf("Max of (15, 20) = %d\n", max(15, 20));
    return 0;

}
