/*Squared number-star pattern*/
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter  n:");
    scanf("%d",&n);
    for(i=1;i<=(n*n);i++){
        printf("%d*",i);
        if(i%n==0){
            printf("\n");
            }
        }
    return 0;
}