// #include <bits/stdc++.h>
// using namespace std;

// void cnt(vector<int>&arr, int n){
//     vector<int>temp;
//     int cnt0 = 0;
//     int cnt1 = 0;
//     int cnt2 = 0;
//     for(int i = 0;i<n;i++){
//         if(arr[i]==0){
//             cnt0++;
//         }
//         else if(arr[i]==1){
//             cnt1++;
//         }
//         else{
//             cnt2++;
//         }
//     }
    
//     for(int i =0;i<cnt0;i++){
//         temp.emplace_back(0);
//     }
//     for(int i=cnt0;i<=n-cnt1;i++){
//         temp.emplace_back(1);
//     }
//     for(int i = (n-cnt1)+1;i<n;i++){
//         temp.emplace_back(2);
//     }
    
//     for(int i =0;i<n;i++){
//         arr[i] = temp[i];
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     cnt(arr,n);
//     for(auto it:arr){
//         cout<<it<<" ";
        
//     }
    
//     return 0;
// }
// ---------------------------This was a better soln of complexity O(2N) and SC of O(N);

#include<bits/stdc++.h>
using namespace std;


void srtonetwo(vector<int>&arr,int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] ==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    srtonetwo(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }

    return 0;
}
