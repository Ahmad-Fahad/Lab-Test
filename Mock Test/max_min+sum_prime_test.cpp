#include<bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    int limit = sqrt(n);
    int flag = 1;
    if(n%2 == 0) {
        flag = 0;
        return flag;
    }
    else {
        for(int i=3; i<limit+1; i+=2) {
        if(n%i == 0 && n != i) {
            flag = 0;
            break;
        }
    }
    return flag;
    }


}
int main() {
    int arr_l = 0;
    cout<<"Enter array length : "<<endl;
    cin>>arr_l;
    int arr_1[arr_l], arr_2[arr_l];
    cout<<"Enter first array :"<<endl;
    for(int i=0; i<arr_l; i++) {
        cin>>arr_1[i];
    }
    cout<<"Enter second array :"<<endl;
    for(int i=0; i<arr_l; i++) {
        cin>>arr_2[i];
    }
    // max 1

    int mx_1 = arr_1[0];
    for(int i=1; i<arr_l; i++) {
        if(mx_1 < arr_1[i]) {
            mx_1 = arr_1[i];
        }
    }
    // max 2

    int mx_2 = arr_2[0];
    for(int i=1; i<arr_l; i++) {
        if(mx_2 < arr_2[i]) {
            mx_2 = arr_2[i];
        }
    }

    // min 1
    int mn_1 = arr_1[0];
    for(int i=1; i<arr_l; i++) {
        if(mn_1 > arr_1[i]) {
            mn_1 = arr_1[i];
        }
    }
    // min 2

    int mn_2 = arr_2[0];
    for(int i=1; i<arr_l; i++) {
        if(mn_2 > arr_2[i]) {
            mn_2 = arr_2[i];
        }
    }
    // prime calc

    int n1 = mx_1 + mx_2;
    int n2 = mn_1 + mn_2;

    int flag_1 = 0;
    flag_1 = isPrime(n1);
    if(flag_1 == 1) {
        cout<<"Max Sum "<<n1<<" is Prime  "<<endl;
    }
    else {
        cout<<"Max Sum "<<n1<<" is Not Prime  "<<endl;
    }


    int flag_2 = 0;
    flag_2 = isPrime(n2);
    if(flag_2 == 1) {
        cout<<"Min Sum "<<n2<<" is Prime  "<<endl;
    }
    else {
        cout<<"Min Sum "<<n2<<" is Not Prime  "<<endl;
    }
    return 0;
}
