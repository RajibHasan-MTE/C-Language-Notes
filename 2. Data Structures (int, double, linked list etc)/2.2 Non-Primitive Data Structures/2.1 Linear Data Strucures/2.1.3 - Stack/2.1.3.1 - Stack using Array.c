#include <stdio.h>
#define MAX 5



int stack[MAX];
int top = -1; // stack is empty initailly


// Push function
void push(int value){

    if(top == MAX -1){
        printf("Stack Overflow! Cannot push %d\n", value);
    }else{
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
    }
}


// Pop function
void pop(){

    if(top == -1){
        printf("Stack Underflow! Cannot pop\n");
    }else{
        printf("%d popped from stack\n", stack[top--]);
    }
}


// Peek function
void peek(){

    if(top == -1){
        printf("Stack is empty!\n");
    }else{
        printf("Topelement is %d\n", stack[top]);
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    peek(); // show top element
    pop();
    pop();
    pop();
    pop(); //Trying to pop from empty stack

    return 0;


}
