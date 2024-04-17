/*printing sum of even and odd number from 1 to 50*/
#include<stdio.h>
int main(){
    int i,n,sumeve=0,sumodd=0;
    printf("Enter  n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sumeve=sumeve+i;
        }
        
        else{
            sumodd=sumodd+i;
            
        }
    }
        printf("sum of odd numbers=%d\n",sumodd);
        printf("sum of even numbers=%d\n",sumeve);
        
    
    return 0;
}