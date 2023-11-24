#include <stdio.h>
int main(){
    int a, b, sum;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("\nThe value of a is %d\n", a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    printf("\nThe value of a is %d", b);
    sum = a + b;
    printf("\nThe sum of a and b is %d", sum);
    float division = a / b;
    printf("\nThe division of a by b is a/b=%f\n", division);
    float multiplication = a * b;
    printf("\nThe multiplication of a and b is a*b = %f\n", multiplication);
    double modulusNum = a % b;
    printf("\nThe modulus of a and b is %.2lf\n", modulusNum);
    //myName = getchar();1
}
