#ifndef STRINGS_C_INCLUDED
#define STRINGS_C_INCLUDED



#endif // STRINGS_C_INCLUDED

#include <stdio.h>
#include <string.h>
int main(){
    char names[] = "Aderemi Sherrifdeen Babalola";
    printf("My name is %s", names);
    char language[] = "C Programming Language";
    printf("\n%s\n", language);

    //STRING FUNCTION

    //To find the length of a string -- strlen
    printf("The length of names character is %zu\n", strlen(names));
    printf("Length : %zu\n", strlen(language));

    //To copy one string to another -- strcopy(it takes two values)
    char food[] = "Amala and Ewedu";
    char bestFood[strlen(food)];
    strcopy(bestFood, food);
    printf("\n%s", bestFood);
    //return 0;
}
