#include <stdio.h>


int N;


int factorial(int n){
    if(n == 0) // Based Condition
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}



int main(){

    printf("Enter the number: ");
    scanf("%d", &N);

    printf("Factorial of %d = %d\n", N, factorial(N));

    return 0;

}
