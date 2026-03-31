#include<bits/stdc++.h>
using namespace std;

// int find_missing(vector<int> &arr, int n){
//     for(int i = 1;i<=n;i++){
//         int flag = 0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==i){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag==0) return i;
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i =0;i<n;i++) cin>>arr[i];
//     cout<<find_missing(arr,n);
//     return 0;
    
// }

// --------------------------------------------------------------------

// void find_missing(vector<int>&a, int n){
//     int hash[n+2] = {0};
//     for(int i =0;i<n;i++){
//         hash[a[i]]+=1;
//     }
//     for(int i =1;i<=n+1;i++){
//         if(hash[i]==0){
//             cout<<i<<endl;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i =0;i<n;i++) cin>>arr[i];
//     find_missing(arr,n);
//     return 0;
// }

// ----------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

void missing_num(vector<int>&arr,int n){
    int xor1 = 0;
    int xor2 = 0;
    for(int i =0;i<n;i++){
        xor1 = xor1^arr[i];
        xor2 = xor2^(i+1);
    }
    xor2 = xor2^n+1;
    int result = xor1^xor2;
    cout<<result<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0 ;i<n;i++) cin>>arr[i];
    missing_num(arr,n);
    return 0;
}