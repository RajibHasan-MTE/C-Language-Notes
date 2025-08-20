#include <stdio.h>


enum ErrorCode {SUCCESS = 0, WARNING = 1, ERROR = -1}; // Define an enumf or error codes


void handleError(enum ErrorCode code){

    if(code == SUCCESS){
        printf("Operation completed successfully. code:%d\n", code);
    }else if(code == WARNING){
        printf("Operation completed with warnings. code:%d\n", code);
    } else if (code == ERROR) {
        printf("Operation failed with an error. code:%d\n", code);
    }

}

int main(){

    enum ErrorCode currentStatus = WARNING;

    handleError(currentStatus);

    return 0;

}
