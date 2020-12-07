#include<stdio.h>
#include<string.h>
int main()
{
    char *ch = "Bangladesh";
    int i;
    char *p = &ch[0];
    for(i=0; i<10; i++) {
        printf("%c ",*(p+i));
    }

    printf("\n");
    //reverse
    int l = strlen(ch);
    for(i=l-1; i>=0; i--) {
        printf("%c ",*(p+i));
    }
    return 0;
}
