#include<stdio.h>
#include<string.h>
int main()
{
    int arr[] = {5,7,9,2,1};
    int *p = &arr[0];
    for(int i=0; i<5; i++) {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
