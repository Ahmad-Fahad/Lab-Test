#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    int arr[]= {4,9,1,3,87};
    for(int i=0; i<5; i++){
        for(int j=0; j<5-1; j++) {
            if(arr[j] > arr[j+1]) {
                t        = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]   = t;
            }
        }
    }
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
