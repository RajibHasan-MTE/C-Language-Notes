#include <stdio.h>
#define SIZE 5




int stack[SIZE], top = -1;




void push(int value){

    if(top == size - 1){
        printf("Stack Overflow!\n");
    }
    else{
        stack[++top] = value;
        printf("%d pushed\n", value);
    }
}

void pop(){

    if(top == 1)
        printf("Stack Underflow!\n");
    else
        printf("%d popped\n", stack[top--]);

}
