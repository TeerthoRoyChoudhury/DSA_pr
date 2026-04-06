#include <bits/stdc++.h>
using namespace std;

bool findit(vector<vector<int>>&mat, int target){
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[i].size();j++){
            if(mat[i][j]==target){
                return true;
            }
        }
    }
    return false;
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
    int target;
    cin>>target;
    cout<<findit(mat,target);

    return 0;
}