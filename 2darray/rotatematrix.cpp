#include <bits/stdc++.h>
using namespace std;

void rotate_matrix(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>>ans(n,vector<int>(m));

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            ans[j][n-1-i] = mat[i][j];
        }
    }
    mat = ans;
}


int main(){
    int row,col;
    cin>>row>>col;

    vector<vector<int>>mat(row,vector<int>(col));

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    rotate_matrix(mat);
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}