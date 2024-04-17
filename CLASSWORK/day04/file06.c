/*
demo on i/o statements
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int num;

    /*
    printf("\n%010d\t%5.2f\n",5,201.5);
    printf("\n%c \t %s","A", "BHIMA");
    */
    printf("\nAddress of num = %u\n",&num);
    scanf("%2d",&num);
    printf("\nValue stored @ %u = %d",&num, num);

    printf("\n\n");
    

    return 0;
}
