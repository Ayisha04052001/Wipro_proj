/*0,3,8,15,24,35,48,63,80,99  printing series*/
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter  n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d,",i*i-1);
    }
return 0;
}