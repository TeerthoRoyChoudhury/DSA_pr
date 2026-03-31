#include <bits/stdc++.h>
using namespace std;


// void mje(vector<int>&arr, int n){
//     int val = n/2;
//     int ans;
//     for(int i = 0;i<n;i++){
//         int cnt = 0;
//         for(int j = 0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cnt++;
//             }
//         }
//         if(cnt>val){
//             ans = arr[i];
//         }
//     }
//     cout<<ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     mje(arr,n);
//     return 0;
// }
// --------------------------------------------Bad Approach----------------


// void majority(vector<int>&arr,int n){
//     int val = n/2;
//     int ans = 0;
//     map<int,int>mpp;
//     for(int i =0;i<n;i++){
//         mpp[arr[i]]++;
//     }
    
//     for(auto it:mpp){
//         if(it.second>val){
//             ans = max(ans,it.first);
//         }
//     }
    
//     cout<<ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     majority(arr,n);
//     return 0;
// }

// ---------------------------More Optimal-------------

void majority(vector<int>&arr, int n){
    int el;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(cnt==0){
            el = arr[i];
            cnt = 1;
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    cout<<el<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    majority(arr,n);
    return 0;
}