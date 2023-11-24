#include <stdio.h>
#include <math.h>

int main(){
    int number;
    printf("Enter Atomic Number between 1 to 5 : ");
    scanf("%d", &number);
    switch(number){
    case 1:
        printf("Hydrogen");
        break;
    case 2:
        printf("Helium");
        break;
    case 3:
        printf("Lithium");
        break;
    case 4:
        printf("Berrylium");
        break;
    case 5:
        printf("Boron");
        break;
    default:
        printf("\nInvalid Number\n");
    }
    printf("\nMake sure you learn the first two element.");
}
