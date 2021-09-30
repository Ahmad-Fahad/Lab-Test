#include<bits/stdc++.h>
using namespace std;
void print_arr(int *arr, int n){
    if(n>=1){
        int m = n;
        n = 1;
        for(n=1; n<=m; n++)
            cout<<arr[n-1];
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i = 5;
    do{
        print_arr(arr, i);
        cout<<endl;
        i--;
    }while(i>0);

    return 0;
}
