#include <stdio.h>

int cnt = 1;
int ifCnt = 0;
int factorial(int n){

    if(n == 0){
        // Base condition
        printf("if cnt: %d\n", ifCnt);
        ifCnt++;
        return 1;
    }
    else{
        int a = n * factorial(n-1); //Direct recursion
        printf("Cnt: %d and N: %d\n", cnt, a);
        cnt++;
        return a;
    }


}


int main(){

    printf("Factorial of 5 = %d\n", factorial(5));


}
