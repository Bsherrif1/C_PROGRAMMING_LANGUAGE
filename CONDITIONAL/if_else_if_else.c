#include <stdio.h>
int main(){

    printf("ABOUT MYSELF\n");
    //string myName[12];
    printf("What is your name : \n");
    //scanf("%c", myName);
    //printf("\nHello World %c\n", myName);

    int myAge;
    printf("Enter your age : ");
    scanf("%d", &myAge);
    printf("\nI am %d year-old.", myAge);

    printf("\nCheck, if it is possible you can vote.\n");

    //int myAge;
    if (myAge < 0){
        printf("You have entered a negative number\n");
    }

     else if (myAge < 18){
        printf("Good citizen of Nigeria, you are not eligible to vote, you're %d, myAge.\n");
    }

    else if (myAge >= 18){
        printf("Good citizen of Nigeria, you are eligible to vote, you're %d-year-old.\n", myAge);
    }

    else if(myAge >=70){
        printf("Good citizen of Nigeria, you're too old to vote, please rest at home, you're %d-year-old.\n", myAge);
    }

    else{
        printf("You have entered an invalid number\n.");
    }
}
