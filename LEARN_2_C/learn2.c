#include <stdio.h>
int main(){
    char operators;
    printf("Enter an operator {'+','-','/','*','^'} : ");
    double num1, num2;
    printf("Enter first number");
    scanf("%lf", num1);

    printf("Enter second number");
    scanf("%lf", num2);

    double result;
    switch(operators){
    case '+':
        result = num1 + num2;
        printf("%d",result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d",result);
        break;
    case '/':
        result = num1 / num2;
        printf("%d",result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d",result);
        break;
    default:
        printf("Invalid operand, make sure you sleep early, take some rest.");
    }
}
