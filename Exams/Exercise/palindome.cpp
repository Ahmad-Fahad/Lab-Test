#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int l = str.length();
    int last = l-1;
    int flag = 0, half_l = l/2;
    for(int i=0; i<half_l; i++) {
        if(str[i] != str[last-i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        cout<<"Not a Palindome"<<endl;
    }
    else {
        cout<<"Palindome"<<endl;
    }

    return 0;
}
