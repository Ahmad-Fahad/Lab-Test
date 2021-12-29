#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 numbers : "<<endl;
    for(int i=0; i<10; i ++) {
        scanf("%d",&arr[i]);
    }
    int minn = arr[0];
    for(int i=0; i<10; i++) {
        if(arr[i] < minn) {
            minn = arr[i];
        }
    }
    cout<<"Lowest : "<<minn;
    return 0;
}

