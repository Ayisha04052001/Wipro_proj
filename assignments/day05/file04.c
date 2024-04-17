/*sum of series = 3+33+333+3333+33333+333333*/
#include<stdio.h>
int main(){
    int n,a,i,ret=0,sum=0;
    printf("Enter  n:");
    scanf("%d",&n);
    printf("Enter  a:");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        ret=(ret*10)+a;
        printf("%d+",ret);
        sum=sum+ret;
    }
    printf("\nsum of series=%d",sum);
    
    return 0;
}