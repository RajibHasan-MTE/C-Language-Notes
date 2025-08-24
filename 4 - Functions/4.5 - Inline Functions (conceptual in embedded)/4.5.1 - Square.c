#include <stdio.h>



static inline int square(int x){

    return x * x;

}


int main(){

    printf("Square of 5 = %d\n", square(5));
    printf("Square of 10 = %d\n", square(10));
    return 0;

}
