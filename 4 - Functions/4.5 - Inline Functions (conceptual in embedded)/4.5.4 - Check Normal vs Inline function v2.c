#include <stdio.h>
#include <time.h>



#define LOOP_COUNT 1000000000 // 100 million iterations



// Normal function
int square_normal(int x){
    return x*x;
}


// Inline function (static inline to avoid liker error)
static inline int square_inline(int x){
    return x * x;

}

int main(){
    clock_t start, end;
    double time_taken;
    int result;



    //-----------------------------
    // Test Normal Function
    //-----------------------------

    start = clock();
    for(int i = 0; i < LOOP_COUNT; i++){
        result = square_normal(i);
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Normal Function Time: %f Seconds\n", time_taken);



    // ------------------------------
    // Test Inline Function
    // ------------------------------
    start = clock();
    for(int i = 0; i < LOOP_COUNT; i++){
        result = square_inline(i);
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Inline Function Time: %f seconds\n", time_taken);


    return 0;
}
