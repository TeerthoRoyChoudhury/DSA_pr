#include <bits/stdc++.h>
using namespace std;


void row_sum(int matrix[][3],int row,int col){
    int max_sum = 0;
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum+=matrix[i][j];
        }
        max_sum = max(max_sum,sum);
    }
    cout<<max_sum<<endl;
}

void col_sum(int matrix[][3],int row, int col){
    int max_sum = 0;
    for(int j = 0;j<col;j++){
        int sum = 0;
        for(int i = 0;i<row;i++){
            sum+=matrix[i][j];
        }
        max_sum = max(max_sum,sum);
    }
    cout<<max_sum<<endl;
}


int main(){
    int matrix[4][3];
    int row = 4;
    int col = 3;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    col_sum(matrix,row,col);
    row_sum(matrix,row,col);


    return 0;
}