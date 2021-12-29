#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, y = 0;
    int t = 0;
    cin>>x>>y;
    cout<<"Without third variable"<<endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<x<<" "<<y<<endl;
    cout<<"With temporary variable"<<endl;
    t = y;
    y = x;
    x = t;
    cout<<x<<" "<<y<<endl;
    return 0;
}
