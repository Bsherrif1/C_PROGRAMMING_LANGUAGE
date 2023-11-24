#include <stdio.h>
int main(){
    int num = 25;
    printf("The integer(int) has 4 bytes %d\n",num);
    double num1 = 23.4567;
    float num2 = 23.4549f;
    printf("Double has a memory storage/size of 8 bytes, the value of is %lf\n", num1);
    printf("To print the value of num1 in one decimal place, it value is %.1lf\n", num1);
    printf("The float has 4 bytes, %f", num2);
    double num3 = 5.5e6;
    printf("\n%lf",num3);
    char name = 'Sherrif';
    printf("\n%c", name);
    printf("\n%d",name);
    return 0;
}
