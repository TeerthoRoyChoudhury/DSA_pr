#include <bits/stdc++.h>
using namespace std;


// void bestime(vector<int>&arr, int n){
//     int profit = 0;
//     for(int i = 0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]-arr[i]>profit){
//                 profit = arr[j] - arr[i];
//             }
//         }
//     }
//     cout<<profit<<endl;
// }

// -------------------------O(n**2) Not worth it-----------------------------------

void bestime(vector<int>&arr, int n){
    int mini = arr[0];
    int profit = 0;
    for(int i =1;i<n;i++){
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini = min(arr[i],mini);
    }
    cout<<profit;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    bestime(arr,n);
    return 0;
}

// TIME COMPLEXITY = 0(N) sc = 0;