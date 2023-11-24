#include <stdio.h>

void findValue(int* num){
    *num = 39;
}

void findSquare(int* nums){
    int square = *nums * *nums;
    *nums = square;
}
int main(){
    int number = 21;
    findValue(&number);
    printf("Number = %d\n", number);

    int num_square = 23;
    findSquare(&num_square);
    printf("Square of 23 is %d", num_square);

}
