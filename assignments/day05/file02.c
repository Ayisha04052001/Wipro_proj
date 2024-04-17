/*printing 1,2,4,8,16,32,64 series*/
#include<stdio.h>
int main(){
    int n,i,a=1;
    printf("Enter  n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        while(a<=64){
        printf("%d ,",a);
        a=a*2;
        }
    }
    return 0;
}