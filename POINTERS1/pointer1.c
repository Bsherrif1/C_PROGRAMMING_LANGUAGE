#ifndef POINTER1_C_INCLUDED
#define POINTER1_C_INCLUDED



#endif // POINTER1_C_INCLUDED

#include <stdio.h>
int main(){
    //Arrays of numbers.
    int numbers[7] = {2,3,4,7,8,9,11};
    for (int numb = 0; numb<6; ++numb){
        printf("The digit is %d memory address is %p and (numbers + m) which is %p\n", numbers[numb], &numbers[numb], numbers + numb);
        //printf("The number is %d\n", numbers[numb]);
    };
    printf("\n\n");
    int numbersOrd[5] = {11,221,31,141,15};
    for (int nums = 0; nums < 7; ++nums){
        printf("%d: %p\n", *(numbersOrd + nums), numbersOrd + nums);
    }

    int myNumbers[4] = {23,41,63,73};
    *myNumbers = 22;
    *(myNumbers + 4) = 74;
    printf("The first Element is %d\n", *myNumbers);
    printf("The third Element is %d\n", *(myNumbers + 2));
    printf("The last Element is %d\n", *(myNumbers + 4));


};
