//Write a C program to make such a pattern as a pyramid with an asterisk.
#include <stdio.h>
int main(){
    int rows,i,j;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    int space=rows+3;
    int w=1;
    for(i=1;i<=rows;i++){
    for(int k=space;k>=1;k--)
    printf(" ");
        for(j=1;j<=i;j++,w++){
            printf("*");
            printf(" ");
        }
        printf(" ");
        space--;
        printf("\n");
    }
    return 0;
}