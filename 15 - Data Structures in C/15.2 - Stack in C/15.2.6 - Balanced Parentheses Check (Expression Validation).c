#include <stdio.h>
#include <string.h>


#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return (top == -1) ? '\0' : stack[top--]; }


int main(){

    char expr[] = "{[()]}";
    int balanced = 1;

    for(int i = 0; i < strlen(expr); i++){
        char ch = expr[i];
        if(ch == '(' || ch == '{' || ch == '[') push(ch);
        else if(ch == ')' || ch == '}' || ch == ']'){
            char popped = pop();
            if((ch == ')' && popped != '(') ||
               (ch == '}' && popped != '{') ||
               (ch == ']' && popped != '[')){
                balanced = 0;
                break;
               }
        }
    }

    if(top != -1) balanced = 0; //Extra opening brackets
    printf("Expression is %s\n", balanced ? "Balanced" : "Not Balanced");
    return 0;
}
