#include<stdio.h>
#define MAX(A,B) ((A)>(B)) ? A:B
void main()
{
    int i=1, j=2;
    int val=MAX(++i,++j);
    printf("%d\n", i);
    printf("%d\n", val);
    return 0;
}
