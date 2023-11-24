/*
Data Types in C
name    file_size   format_specifier
int        4 bytes      %d
double     8 bytes      %lf /%lf.3lf
float      4 bytes      %f
char       1 bytes      %c
*/

#include <stdio.h>
int main(){
    printf("C variable to print integers\n");
    int age = 25;
    char name = 'Remi';
    printf("I am %d in age\n",age);
    age = 28;
    printf("My age in three years time is %d",age);
    int firstnum = 33;
    int secondnum = firstnum;
    printf("\nThe value of the second number is %d\n", secondnum);

    int var1, var2 = 47;
    printf("The value of var1 takes a random number\n");
    printf("%d ", var2);
    printf("%d\n", var2);

    double value0 = 5.71e3;
    double value1 = 5.783915;
    double value2 = 3.9979;

    printf("The value of value0 using double is %lf", value0);
    print("\nValue1\tValue1\t\n");
    printf("\nThe value of value1 using double in two decimal place is %.2lf\n", value1);
    printf("The value of value1 using double in three decimal places is %.3lf\n", value1);
    printf("The value of value1 using double in four decimal places is %.4lf\n", value1);
    printf("Value2\tValue2\t\n");


    float values = 5.78391f;
    printf("%f", values);
    return 0;
}
