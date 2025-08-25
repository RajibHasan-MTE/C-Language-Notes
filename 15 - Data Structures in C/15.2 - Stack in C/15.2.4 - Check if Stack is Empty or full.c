#include <stdio.h>


#define SIZE 3


int stack[SIZE], top = -1;


int isEmpty() { return top == -1; }
int isFull() { return top == SIZE - 1; }


void push(int value){
    if(isFull()) printf("Stack full!\n");
    else stack[++top] = value;

}


int main(){

    printf("Is stack emty? %s\n", isEmpty() ? "Yes" : "No");
    push(1);
    push(2);
    //push(3);

    printf("Is stack full? %s\n", isFull() ? "Yes" : "No");

    return 0;

}
