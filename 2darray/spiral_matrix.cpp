#include <bits/stdc++.h>
using namespace std;

void spiral_matrix(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();
    int top = 0;
    int bottom = n-1;
    int right = m-1;
    int left = 0;
    vector<int>ans;

    while(left<=right&&top<=bottom){
        for(int i = left;i<=right;i++){
            ans.emplace_back(mat[top][i]);

        }
        top++;
        for(int i = top;i<=bottom;i++){
            ans.emplace_back(mat[i][right]);
        }
        if(top<=bottom){
            right--;
            for(int i = right;i>=left;i--){
                ans.emplace_back(mat[bottom][i]);
            }
        }
        if(left<=right){
            bottom--;
            for(int i = bottom;i>=top;i--){
                ans.emplace_back(mat[i][left]);
            }
            left++;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
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
    spiral_matrix(mat);

    return 0;
}