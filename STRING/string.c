#ifndef STRINGS_C_INCLUDED
#define STRINGS_C_INCLUDED



#endif // STRINGS_C_INCLUDED

#include <stdio.h>
#include <string.h>
//STRING IS AN ARRAY/COLLECTION OF CHARACTERS USED TO REPRESENT TEXT DATA.
//NULL CHARACTER REPRESENTED BY \0.
int main(){
    //DECLARING AN ARRAY  char array[];
    //SCANF print the characters until it encounters white space.
    char str[20];
    printf("Enter string value : ");
    //fgets takes three parameter; the name of the string, size of the string[sizeof(string)] and standard input(stdin);
    fgets(str, sizeof(str), stdin);
    printf("%s", str);

    //INDEXING %c is used as format specifier for indexing in C
    char nameIt[] = "Aboutmyself,myfavouritesportisBadminton.";
    printf("\nINDEXING\n");
    nameIt[5] = 'M';
    printf("%c\n", nameIt[4]);
    printf("%c\n", nameIt[14]);
    printf("%c\n", nameIt[24]);
    printf("%s\n\n", nameIt);

    char names[] = "Aderemi Babalola";
    printf("My name is %s\n", names);
    names[0] = 'X';
    printf("%s\n\n", names);

    //LESSON 2
    char language[] = "C Programming Language";
    printf("\n%s\n", language);

    //STRING FUNCTION
    //To find/print the length of a string -- strlen(string_name)
    printf("The length of names character is %zu\n", strlen(names));
    printf("Length : %zu\n", strlen(language));

    //To copy one string to another -- strcpy(it takes two values)
    char food[] = "Amala and Ewedu";
    printf("%s", food);
    char bestFood[strlen(food)];
    strcpy(bestFood, food);
    printf("My best food is %s\n\n", bestFood);

    //TO CONCATENATE TWO STRINGS strcat(string1, string2);
    char greet[] = "Hey, ";
    char greets[] = "How you doing?";
    strcat(greet, greets);
    printf("%s\n\n", greet);

    //TO COMPARE TWO STRINGS strcmp;
    char greeting[] = "Hey";
    int output = strcmp(greet, greets);
    printf("%d\n", output);
    int result = strcmp(greet, greeting);
    printf("%d\n\n", result);

    printf("Enter String1 : ");
    char string1[35];
    fgets(string1, sizeof(string1), stdin);
    printf("%s\n", string1);
    printf("Enter String2 : ");
    char string2[35];
    fgets(string2, sizeof(string2), stdin);
    printf("%s\n", string2);
    int output1 = strlen(string1);
    printf("%zu\n", output1);
    int output2 = strlen(string2);
    printf("%zu", output2);

    int finalOutput = (output1 > output2) ? printf("%zu - %s", strlen(string1), string1) : printf("%zu - %s", strlen(string2), string2);
    //printf("The outcome is %s", finalOutput);
    //if (strlen(string1) > strlen(string2)){

        //printf("%zu", strlen(string1));
    //}else{
        //printf("%zu", strlen(string2));
    //}
    return 0;
}
