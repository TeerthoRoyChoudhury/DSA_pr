#include <bits/stdc++.h>
using namespace std;


// void diagonal_sum(int matrix[][4], int row, int col, int n){
//     int pd_sum = 0;
//     int sd_sum = 0;
//     for(int i = 0;i<row;i++){
//         for(int j = 0;j<col;j++){
//             if(i==j){
//                 pd_sum+=matrix[i][j];
//             }
//             else if(j==n-i-1){
//                 sd_sum+=matrix[i][j];
//             }
//         }
//     }
//     cout<<pd_sum<<" "<<sd_sum<<endl;
// }
// -----------optimised---------------------------------------

void diagonal_sum(int matrix[][4],int n){
    int pd_sum = 0;
    int sd_sum = 0;
    for(int i = 0;i<n;i++){
        pd_sum+=matrix[i][i];
        sd_sum +=matrix[i][n-i-1];
    }
    cout<<pd_sum<<" "<<sd_sum;
}





int main(){
    int matrix[4][4];
    int n = 4;
    int row = 4;
    int col = 4;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    diagonal_sum(matrix,n);
    return 0;
}