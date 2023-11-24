#include <stdio.h>

int main(){
    /*float age;
    printf("What is your age?\n");
    printf("Enter your age : ");
    scanf("%f", &age);
    printf("\nMy age is %e", age);
    printf("\nABOUT ME\n");
    printf("What is your name : ");
    char yourName[20];
    gets(yourName);
    printf("%s", yourName);

    printf("\nWhat is your middle name : ");
    char myName[25];
    fgets(myName, 25, stdin);
    printf("\nMy name is %s", myName);

    char subject[20];
    printf("What is your best subject? ");
    printf("\nEnter name of your best subject : ");
    scanf("%[^\n]%*c", subject);
    printf("\nMy best subject is %s\n", subject);

    char myHobby;
    printf("\n\nWhat is your hobby");
    printf("\nEnter your hobby : ");
    scanf("%[^\n]s", myHobby);
    printf("\nMy hobby is playing %s", myHobby);*/

    /*char c;
    printf("Enter a character : ");
    c = getchar();
    printf("\nYou passed");
    putchar(c);
    getch();*/

    float age[4];
    printf("Enter four input values : ");

    for (int i = 0; i < 4; ++i){
        scanf("%f", &age[i]);
    }
    for (int i = 0; i < 4; ++i){
        printf("%f", &age[i]);
    }
    return 0;
}
