#include <stdio.h>
#define SIZE 32


int stack[SIZE], top = -1;

void push (int value) { stack[++top] = value; }


int main(){

    int num = 25;
    while(num > 0){
        push(num % 2);
        num /= 2;
    }

    printf("Binary: ");
    while(top != -1)
        printf("%d", stack[top--]);

    return 0;
}
