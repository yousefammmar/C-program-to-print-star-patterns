//C program to print hollow square or rectangle star pattern
#include <stdio.h>
int main (){
int j,n,i;
printf("enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(i==1||i==n||j==n||j==1)
    printf("*");
    else
    printf(" ");
}
printf("\n");
}

    return 0;
}