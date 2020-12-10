#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x = 0;
    int n = 30;  // steps
    cin>>x;
    double temp = 1, sum = 1;
    for(int i=1; i<=n; i++) {
        temp = temp*(x/i);
        sum = sum + temp;
    }
    cout<<sum<<endl;
    return 0;
}




