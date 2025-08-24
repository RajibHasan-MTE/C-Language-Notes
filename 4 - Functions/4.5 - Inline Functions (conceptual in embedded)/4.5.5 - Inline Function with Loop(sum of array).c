#include <stdio.h>


static inline int sumArray(int arr[], int size){

    int sum = 0;
    for(int i = 0; i <size; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){

    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Sum of array = %d\n", sumArray(data, size));

    return 0;

}
