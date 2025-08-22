#include <stdio.h>




void odd(int n);


void even(int n){

    if(n == 0)
    {
        printf("Even\n");
    }
    else
    {
        odd(n - 1); //calls odd()
    }

}

void odd(int n){

    if(n == 0)
    {
        printf("Odd\n");
    }
    else
    {
        even(n - 1); //calls even()
    }
}


int main(){

    even(4); //output : even
    even(5); //Output  : odd

    return 0;

}
