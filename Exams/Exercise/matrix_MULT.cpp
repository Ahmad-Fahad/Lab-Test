#include<bits/stdc++.h>
using namespace std;
int main() {

    int c_1 = 2, c_2 = 1, r_1 = 2, r_2 = 2, sum = 0;
    //int arr_1[r_1][c_1];
    //int arr_2[r_2][c_2];
    int arr_1[2][2] = {
        {1,2},
        {3,4}
    };
    int arr_2[2][1] = {
        {9},
        {5}
        };


    int mult[r_1][c_2];
        for(int i=0; i<r_1; i++) {
            for(int j=0; j<c_2; j++) {
                for(int k=0; k<c_1; k++) {
                    sum += arr_1[i][k] * arr_2[k][j];
                    mult[i][j] = sum;
                    sum = 0;
                }
            }
        }
        for(int i=0; i<r_1; i++) {
            for(int j=0; j<r_2; j++) {
                cout<<mult[i][j]<<" ";
            }
            cout<<endl;
        }

   return 0;
}
