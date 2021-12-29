#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 numbers : "<<endl;
    for(int i=0; i<10; i ++) {
        scanf("%d",&arr[i]);
    }
    int maxx = arr[0];
    for(int i=0; i<10; i++) {
        if(arr[i] > maxx) {
            maxx = arr[i];
        }
    }
    cout<<"Largest : "<<maxx;
    return 0;
}
