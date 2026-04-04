#include <bits/stdc++.h>
using namespace std;


pair<int,int> Linear_search(int matrix[][3],int row,int col, int key){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(matrix[i][j]==key){
                return{i,j};
            }
        }
    }
    return {-1,-1};
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
    int key;
    cin>>key;
    pair<int,int>ans = Linear_search(matrix,row,col,key);
    cout<<ans.first<<" "<<ans.second;

    return 0;
}