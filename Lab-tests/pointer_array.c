#include<stdio.h>
int main()
{
    int i, j;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *p = &arr[0];

    printf("*p = %d\n", *p);
    printf("p = %d\n", p);

    for(i=0; i<5; i++) {
        printf("%d ", *(p+i));
        printf("( %d ) ",p+i );
    }
    printf("\n");



    //reverse

    for(j=8; j>=0; j--) {
        printf("%d ", *(p+j));
    }

      printf("\n");

    // address increment

    for(i=0; i<5; i++) {
            printf(" %d ", *p);
            p++;
        }


    return 0;
}
