#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0, factorial = 1;
    cin>>n;
    for(int i=n; i>0; i--) {
        factorial *= i;
    }
    cout<<factorial<<endl;
    return 0;
}
