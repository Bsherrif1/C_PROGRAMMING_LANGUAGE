#include <stdio.h>

int main(){
    //int ages[5] = {21,29, 25, 32, 17};
    //printf("%d\n", ages[4]);

    int yourAge[4];
    printf("Enter four input values : ");

    for (int i = 0; i < 4; i++){
        scanf("%d", &yourAge[i]);
    }
    for (int i = 0; i < 4; i--){
        printf("%d ", yourAge[i]);
    }

    //int age[6];
    /*scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    scanf("%d", &age[3]);
    scanf("%d", &age[4]);
    printf("\n%d", age[0]);
    printf("\n%d", age[1]);
    printf("\n%d", age[2]);
    printf("\n%d", age[3]);
    printf("\n%d", age[4]);*/
    return 0;
}
