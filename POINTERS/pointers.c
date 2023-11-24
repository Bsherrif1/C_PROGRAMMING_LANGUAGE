#ifndef POINTERS_C_INCLUDED
#define POINTERS_C_INCLUDED



#endif // POINTERS_C_INCLUDED
#include <stdio.h>

int main(){
    int age = 21;
    //%p is used to print the address
    printf("%p\n", &age);

    //A pointer is also a variable.
    int* pointer = &age;
    printf("%p", pointer);
    printf("\nValue : %d", pointer);
    *pointer = 27;
    printf("\n%d", age);

    int price = 500;
    int* score = &price;
    printf("\n%d", score);
    *score = 350;

    printf("\nNew price : %d\n\n", price);

    //  int age;
    //  int* pointer;
    //  pointer = age; //       Invalid.
    //  *pointer = &age; //     Invalid.
    //  pointer = &age; //      Valid.
    //  *pointer = age; //      Valid.

    double salary = 30;
    printf("What is your salary : ");
    scanf("%lf", &salary);
    //fgets(salary, sizeof(salary), stdin);
    printf("My salary is %lf", salary);
    printf("\n\nWATCHOUT");
    double* pointer1 = &salary;
    *pointer1 = 2*salary;
    printf("\nThe memory address of pointer1 is : %p", pointer1);
    printf("\nThe value of pointer1 is : %lf\n\n", *pointer1);
    return 0;
}
