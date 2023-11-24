#include <stdio.h>
#include <math.h>

int addUp(int a, int b, int c){
        int total;
        total = a + b + c;
        return total;
    }

void main(){
    int a = 4;
    int b = 5;
    int c = 6;
    int output = addUp(a,b,c);
    printf("The total sum is %d", output);
}
