#include <stdio.h>

void main(){
    printf("Sherrifdeen\n");
    printf("What is your name : ");
    char myName[25];
    gets(myName);
    printf("My name is %d", myName);
    float numb;
    scanf("%f", &numb);
    printf("The number is %e", numb);
}

//#include <stdio.h>
//void main()
/*{
    int a;
    float d;
    char ch, name[40];
    printf("Please enter the data\n");
    scanf("%d %f %c %s”, &a, &d, &ch, name);
    printf("\n The values accepted are : %d, %f, %c, %s”, a, d, ch, name);
}*/
