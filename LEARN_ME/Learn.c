#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
    double number = 4399;
    double output = number / 12;
    printf("%lf\n",number);
    printf("%lf\n",output);
    int outputs = 48;
    printf("%d\n", ++outputs);
    int outputs1 = 48;
    printf("%d\n", --outputs1);

    int outputs2;
    printf("%d\n", outputs);
    int a = 4;
    int b = 17;
    int sum1 = a + b;
    printf("\nThe sum of a and b is %d\n", sum1);
    printf("Remi");

    char Name;
    printf("\n\nEnter the value of Name : ");
    scanf("%c", &Name);
    printf("\nThe value of J is %c\n", Name);

    printf("%c\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%f\n",sizeof(float));
    printf("%ld\n", sizeof(double));


    int guessNum;
    printf("\nGuess a number between 4 and 8 : ");
    scanf("%d\n\n", &guessNum);
    switch(guessNum){
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;
    default:
        printf("You have entered a week day");
        break;
    }

    /*char character1;
    printf("Enter a character ");
    scanf("%c",&character1);
    switch(character1){
        case a:
        case e:
        case i:
        case o:
        case u:
            printf("\nYou have entered a vowel")
            break;
        case b:
        case c:
        case f:
        case g:
        case p:
            printf("You have entered a consonant");
            break;
        default:
            printf("You have entered an invalid character");
    }
    */
}
