#include <bits/stdc++.h>
using namespace std;

// void productofarray(vector<int>&arr,int n){
//     vector<int>temp;
//     for(int i = 0;i<n;i++){
//         int pr = 1;
//         for(int j = 0;j<n;j++){
//             if(i==j) continue;
//             pr = pr*arr[j];
//         }
//         temp.emplace_back(pr);
//     }
//     for(auto it:temp){
//         cout<<it<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     productofarray(arr,n);
//     return 0;
// }

// Slight Optimisation -------------------------

// void productofarray(vector<int>&arr, int n){
//     int pr = 1;
//     for(int i = 0;i<n;i++){
//         pr = pr*arr[i];
//     }
//     vector<int>temp;
//     for(int i = 0;i<n;i++){
//         int ans = pr/arr[i];
//         temp.emplace_back(ans);
//     }
//     for(auto it:temp){
//         cout<<it<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     productofarray(arr,n);
//     return 0;
// }
// ----This only work if the array has no 0s in it--------------

// Most Optimal

void productofarray(vector<int>&arr, int n){
    vector<int>prefix(n);
    vector<int>suffix(n);
    prefix[0] = 1;
    suffix[n-1] = 1;

    for(int i = 1;i<n;i++){
        prefix[i] = prefix[i-1]* arr[i-1];
    }

    for(int i = n-2;i>=0;i--){
        suffix[i] = suffix[i+1]* arr[i+1];
    }

    for(int i = 0;i<n;i++){
        arr[i] = prefix[i]*suffix[i];
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    productofarray(arr,n);
    return 0;
}

