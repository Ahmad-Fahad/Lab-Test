#include<bits/stdc++.h>
using namespace std;
long long int factorial(long long int n) {
    if(n==1 || n==0) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
int main() {
    long long int n = 0;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
