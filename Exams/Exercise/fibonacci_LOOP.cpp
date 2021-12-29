#include<bits/stdc++.h>
using namespace std;
int main() {
    int t1=0, t2=1, temp=0;
    int n = 0;
    cin>>n;
    cout<<t1<<"  ";
    for(int i=0; i<n; i++) {
        cout<<t2<<"  ";
        temp = t2;
        t2 = t1 + t2;
        t1 = temp;
    }

    return 0;
}
