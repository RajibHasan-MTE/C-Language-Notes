#include <stdio.h>



static inline int isEven(int n){

    return (n % 2 == 0);

}

int main(){

    int num = 7;
    if(isEven(num)){
        printf("%d is Even\n", num);
    }
    else{
        printf("%d is Odd\n", num);
    }

    return 0;
}
