#include <bits/stdc++.h>
using namespace std;


// void setzerone(vector<vector<int>>&mat){
//     int n = mat.size();
//     int m = mat[0].size();

//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<m;j++){
//             if(mat[i][j]==0){
//                 // for rows -->
//                 for(int k = 0;k<m;k++){
//                     if(mat[i][k]!=0){
//                         mat[i][k]=-1;
//                     }
//                 }
//                 // For col--->
//                 for(int k = 0;k<n;k++){
//                     if(mat[k][j]!=0){
//                         mat[k][j]=-1;
//                     }
//                 }
//             }
//         }
//     }

//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<m;j++){
//             if(mat[i][j]==-1){
//                 mat[i][j] =0;
//             }
//         }
//     }
// }

// int main(){
//     int row,col;
//     cin>>row>>col;
//     vector<vector<int>>mat(row,vector<int>(col));
//     for(int i = 0;i<row;i++){
//         for(int j = 0;j<col;j++){
//             cin>>mat[i][j];
//         }
//     }
//     setzerone(mat);
//     for(int i = 0;i<row;i++){
//         for(int j = 0;j<col;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
// -------Slight Optimised--------------------------------


void setzerone(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();

    vector<int>row(n,0);
    vector<int>col(m,0);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(mat[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(row[i]==1||col[j]==1){
                mat[i][j] = 0;
            }
        }
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
    setzerone(mat);

    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}