//pattren using 2 symbols the user must enter
#include <stdio.h>
int main(){
    int line,i=0,x=0;
    char s1,s2;
    printf("enter the number of the middle line:");
    scanf("%d",&line);
    printf("enter the first symbol: ");
    scanf(" %c",&s1);
    printf("enter the second symbol: ");
    scanf(" %c",&s2);
    while(i<(line-1)){
        x=0;
        while(x<=i){
            if(x%2==0)
            printf("%c",s1);
            else
            printf("%c",s2);
            x++;
        }
        printf("\n");
        i++;
    }
    i=line-1;
    while(i>=0){
        x=0;
        while(x<=i){
            if(x%2==0)
            printf("%c",s1);
            else 
            printf("%c",s2);
            x++;
        }
        printf("\n");
        i--;
    }
    return 0;
}