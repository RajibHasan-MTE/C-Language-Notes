#include <stdio.h>
#include <string.h>


#define SIZE 100

char stack[SIZE];
int top = -1;



void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }


int main(){

    char str[] = "Hello Stack!";
    int len = strlen(str);

    for(int i = 0; i < len; i++)
        push(str[i]);

    printf("Reversed String: ");
    while(top != -1)
        printf("%c", pop());

    return 0;

}
