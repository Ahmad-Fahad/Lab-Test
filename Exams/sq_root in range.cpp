#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=x; i<y; i++){
        if(i*i <= y) {
            cout<<i<<endl;
        }
    }
    return 0;
}
