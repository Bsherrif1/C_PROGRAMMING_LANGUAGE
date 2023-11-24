#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    char operator = '+';
    int num1 = 8;
    int num2 = 7;

    int result = (operator == '-') ? (num1+num2): (num1-num2);
    printf("%d", result);

    int checkNum;
    printf("\nEnter a number : ");
    scanf("%d", &checkNum);
    int output = (checkNum % 2 == 0) ? printf("You have entered an even number") : printf("You have entered an odd number");
    return 0;
}
