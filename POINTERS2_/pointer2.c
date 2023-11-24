#include <stdio.h>

// return type
int* findSquare(int* numb){
    // RETURN POINTERS FROM A FUNCTION
    int cube = *numb * *numb * *numb;
    *numb = cube;
    return numb;
}

int main(){
    int numb = 25;
    findSquare(&numb);
    printf("The square of 25 is %d\n", numb);

    int number = 31;
    int* result = findSquare(&number);
    printf("\nThe cube of 31 is %d\n", *result);
    return 0;
}
