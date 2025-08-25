#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

// Push function
void push(int value){
    if(top == SIZE - 1)
        printf("Stack is full");
    else{
        top++;
        stack[top] = value;
        printf("%d pushed\n", value);
    }
}

// Pop function
void pop(){
    if(top == 1)
        printf("Stack is emty!\n");
    else{
        printf("%d popped\n", stack[top]);
        top--;
    }
}

// Peek funciton
void peek(){
    if(top == 1)
        printf("stack is empty!\n");
    else
        printf("Top element: %d", stack[top]);

}


int main(){

    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();

    return 0;
}
