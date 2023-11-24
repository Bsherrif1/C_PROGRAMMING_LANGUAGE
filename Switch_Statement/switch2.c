#include <stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    switch(number){
    case 1:
    case 7:
        printf("Weekend");
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday");
    }
}
