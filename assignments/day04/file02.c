/*Employee details*/
#include<stdio.h>
int main(){
    int slNo,ID,i,n;
    long int PhNo;
    float Salary;
    char Name[20];
    char gender;
    char address[80];
    printf("Enter  n:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("\nenter slno =");
        scanf("%d",&slNo);
        printf("\nenter ID=");
        scanf("%d",&ID);
        printf("\nenter Phno=");
        scanf("%ld",&PhNo);
        printf("\nenter salary=");
        scanf("%f",&Salary);
        printf("\nenter Name=");
        scanf("%s",Name);
        getchar();
        printf("\nenter Gender=");
        scanf("%c",&gender);
        printf("\nenter address=");
        scanf("%s",address);
    }
    printf("===================================================================================\n");
    printf("\t\t\t\tEmployee Details\n");
    printf("===================================================================================\n");
    printf("SlNo\tID\tName\t\tgender\tsalary\t\tPhNo\t\tAddress\n");
    printf("------\t------\t\t----\t--------\t------\t\t---------\n");
    printf("%d\t%d\t%s\t\t%c\t%f\t\t%ld\t\t%s\n",slNo,ID,Name,gender,Salary,PhNo,address);
    printf("\n\n");
}
