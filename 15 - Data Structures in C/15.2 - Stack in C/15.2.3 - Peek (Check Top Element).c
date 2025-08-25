#include <stdio.h>
#define SIZE 5



int stack[SIZE], top = -1;



void push(int value){ stack[++top] = value; }
int peek() { return (top == -1) ? -1 : stack[top]; }


int main(){

    push(100);
    push(200);
    printf("Top element = %d\n", peek());

    return 0;

}
