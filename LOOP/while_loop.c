#include <stdio.h>

int main(){
    int number;
    printf("Input a number : ");
    scanf("%d", &number);
    printf("The number is %d", number);
    int count = 1;
    while (count < 13){
        int product = number * count;
        printf("\n%d * %d = %d", number, count, product);
        count++;
    }
}


