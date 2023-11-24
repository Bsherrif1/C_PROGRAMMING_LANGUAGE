#include <stdio.h>
#include <string.h>

int main(){
    /*printf("What are we learn today\n");
    printf("Enter what you're learning : ");
    char learn[50];
    scanf("%s", learn);
    printf("I am learning %s\n"); // learn about string method(s).
    printf("You shall make one.\n");
    printf("The value of arr[0][1] = %d\n",arr[0][1]);
    printf("The value of arr[1][2] = %d\n",arr[1][2]);
    printf("The value of arr[0][2] = %d\n",arr[0][2]);

    for (int numb=0; numb <= 2; numb++){
        for (int num = 0; num <= 2; num++){
            printf("%d\n", arr[numb][num]);
        }
        //printf("\n");
    }

    int arrs[1][4] = {{3,6,9,12}, {2,4,6,8}};
    printf("%d", arrs[1][4]); //  Random value;

    char strs[] = "I LOVE MY LIFE, SHERRIFDEEN.";
    //printf("\nEnter your name : ");
    //scanf("%s", strs);
    printf("\nMy name is %s", strs);


    printf("\nLength : %zu", strlen(strs));

    // STRING FUNCTION data_type new_var_name[strlen(your_var_name)]
    char nameYours[] = "I LOVE MY LIFE, SHERRIFDEEN.";
    char King_Sherrif[strlen(nameYours)];
    strcpy(King_Sherrif, nameYours);
    printf("\nThe assigned new name, has a length of %s", King_Sherrif);

    /*int phoneNumber;
    printf("\nEnter your phoneNumber6 : ");
    scanf("%s", strs);
    printf("\nMy name is %s", strs);
    printf("\n")

    // STRING FUNCTION strcat(var1, var2)
    char text1[] = "Hey, ";
    char text2[] = "how are you?";

    strcat(text1, text2);
    printf("\n\n%s\n\n", text1);

    char object1[] = "abcdj";
    char object2[] = "abcdj";

    int compare = strcmp(object1, object2);
    printf("%d\n", compare);

    char myString1[] = " ";
    printf("Enter a string : ");
    fgets(myString1, 20, stdin);
    printf("\nMy output of myString1 is %s", myString1);
    char myLen1[strlen(myString1)];
    printf("\n%d", strlen(myLen1));

    char myString2[] = " ";
    printf("Enter a string : ");
    fgets(myString2, 20, stdin);
    printf("\nMy output of myString2 is %s", myString2);
    char myLen2[strlen(myString2)];
    printf("\n%zu", strlen(myLen2));*/

    /*int myAge = 25;
    int* pAge = &myAge;
    printf("%p", &pAge);
    //scanf("%d", &pAge);
    printf("\nMy age is %d\n", *pAge);

    int number23 = 34;
    int* point = &number23;
    point = 42;
    printf("My number is %d", point);
    printf("\nMy number is %p", &point);

    double salary = 50.12;
    double* pointer = &salary;
    pointer = 60;
    printf("\nMy salary is %p", &pointer);
    printf("\nYou salary is %lf", pointer);*/

    int square(){
        int numbers[5] = {1,3,5,7,9};
        for (int i=0; i<5; ++i){
            printf("%d" = "%p\n", numbers[i], &numbers[i]);
        }
        printf("Array address of number 1:%p\n, numbers * 2");
        printf("Array address of number 2:%p\n, numbers * 2");
        printf("Array address of number 3:%p\n, numbers * 2");
    }

    return 0;

}
