/*
Data Types in C
name    file_size   format_specifier
int        4 bytes      %d
double     8 bytes      %lf /%lf.3lf
float      4 bytes      %f
char       1 bytes      %c

double is preferable than float because it can store
decimal parts with more precision with larger numbers.

char is stored as integer in C
char is enclosed in a single quote

printf is used to print to the console
scanf is used to take an input
&(ampersand) is used for memory address,
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
    printf("\n\tValue1\tValue1\t\n");
    printf("\nThe value of value1 using double in two decimal place is %.2lf\n", value1);
    printf("The value of value1 using double in three decimal places is %.3lf\n", value1);
    printf("The value of value1 using double in four decimal places is %.4lf\n", value1);
    printf("\nValue2\tValue2\t\n");
    printf("The value of value1 using double in one decimal place is %.1lf\n", value1);
    printf("The value of value1 using double in two decimal places is %.2lf\n", value1);
    printf("The value of value1 using double in three decimal places is %.3lf\n", value1);
    printf("The value of value1 using double in four decimal places is %.4lf\n", value1);

    float values = 5.78391f;
    printf("%f\n", values);

    char myName = 'Sherrifdeen';
    printf("\nIt is your brother in Islam %c", myName);
    printf("\nCharacter is stored as integer, n as a value of %d\n", myName);

    printf("int size %zu\n",sizeof(age));
    printf("int size %zu\n",sizeof(name));
    printf("int size %zu\n",sizeof(myName));
    printf("int size %zu\n",sizeof(value0));
    printf("int size %zu\n",sizeof(values));

    int myShirtNumber;
    printf("Enter a number : ");
    scanf("%d", &myShirtNumber);
    printf("\nI play as a midfielder, my shirt number is %d", myShirtNumber);

    double guessGP;
    printf("\nEnter a value : \n");
    scanf("%lf", &guessGP);
    printf("\nMy CPGA is %lf\n", guessGP);

    /*char myLetter;
    printf("Enter a letter : ");
    scanf("\n%c", &myLetter);
    printf("\nThe letter is %c", myLetter);

    // oPERATOR
    int result = 8;
    double sum = result + 8;
    printf("\ns%lf",sum);*/


    float aa;
    printf("Enter the value of aa : ");
    scanf("%f",aa);
    printf("\nThe value of aa is %f", aa);

    float bb;
    printf("\nEnter the value of bb : ");
    scanf("%f",bb);
    printf("\nThe value of bb is %f", bb);

    double cc;
    cc = aa + bb;
    printf("\nThe value of cc is %lf", cc);
}
