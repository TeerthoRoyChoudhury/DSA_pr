#include<bits/stdc++.h>
using namespace std;

// void longest_subarray(vector<int>&arr, int n, int k){
//     int len = 0;
//     for(int i = 0;i<n;i++){
//         int sum = 0;
//         for(int j = i;j<n;j++){
//             sum+=arr[j];
//             if(sum<=k){
//                 len = max(len,j-i+1);
//             }
//             else if(sum>k) break;
//         }
//     }
//     cout<<len<<endl;
// }
// More Optimised by SLIDING WINDOW------------


void longest_subarray(vector<int>&arr, int n, int k){
    int sum = 0;
    int left = 0;
    int right = 0;
    int max_len = 0;
    while(right<n){
        sum+=arr[right];

        while(sum>k){
            sum-=arr[left];
            left++;
        }
        max_len = max(max_len,right-left+1);
        right++;
    }
    cout<<max_len;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int key;
    cin>>key;
    longest_subarray(arr,n,key);
    return 0;
}