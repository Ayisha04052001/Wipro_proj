/*

demo on increment and decrement operators

*/

#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    y = --x;
    printf("\nx=%d y=%d\n",x,y);
    printf("\nx=%d y=%d\n",x++,--y);
    printf("\nx=%d y=%d\n",x,y);
    

    printf("\n\n");
    return 0;
}
