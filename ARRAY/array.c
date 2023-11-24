#include <stdio.h>

int main(){
    /*int age[5];
    for (int i = 0; i<5; i++){
        scanf("%d", &ages[i]);
    }
    for (int i = 0; i<5; i++){
        printf("%d", age[i]);
    }*/
    char stat[20];
    int len,i,cnt=0;
    printf("Enter a word : ");
    scanf("%s",stat);
    for(i=0;i<strlen(stat);i++)
    if(stat[i]=='a'||stat[i]=='e'||stat[i]=='i'||stat[i]==
    'o'||stat[i]=='u')
    {
    printf("%c\n",stat[i]);
    cnt++;
    }
    printf("\n\nThe number of vowels are : %d", cnt);

    return 0;
}
