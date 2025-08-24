#include <stdio.h>




static inline void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){


    int x = 5, y = 10;
    printf("Before swap: x = %d, Y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;

}
