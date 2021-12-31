#include<bits/stdc++.h>
using namespace std;
int str_len(string str) {
    int l = 0;
    for(int i=0; str[i] !='\0'; i++) {
        l++;
    }
    return l;
}
string str_concatanate(string str_1, string str_2) {

    int l1 = str_len(str_1);
    int l2 = str_len(str_2);
    int l = l1+l2;
    char str_3[l];
    int temp = 0;
    for(int i=0; i<l1; i++) {
        str_3[i] = str_1[i];
        temp = i;
    }
    temp = temp + 1;
    for(int i=0; i<l2; i++) {
        str_3[temp++] = str_2[i];

    }
    return str_3;
}
string str_reverse(string str) {
    int l = str_len(str);
    char str_1[l];
    int j = 0;
    for(int i=l-1; i>=0; i--) {
        str_1[j++] = str[i];
    }
    str_1[l] = '\0';
    return str_1;
}
int main() {
    string str;
    cin>>str;
    cout<<"Length "<<str_len(str)<<endl;
    cout<<"Reversed "<<str_reverse(str)<<endl;
    cout<<"enter Two strings :"<<endl;
    string str_1, str_2;
    cin>>str_1>>str_2;
    cout<<"Concatanated String : "<<str_concatanate(str_1, str_2)<<endl;


    return 0;
}
