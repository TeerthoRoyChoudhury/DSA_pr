#include <bits/stdc++.h>
using namespace std;


// void lsa(vector<int>&arr, int n, int k){
//     int len = 0;
//     for(int i = 0;i<n;i++){
//         for(int j = i;j<n;j++){
//             int sum = 0;
//             for(int l = i;l<=j;l++){
//                 sum+=arr[l];
//             }
//             if(sum == k) len = max(len,j-i+1);
//         }
//     }
//     cout<<len<<endl;

// }

// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vector<int>arr(n);
//     for(int i =0;i<n;i++) cin>>arr[i];
//     lsa(arr,n,k);
//     return 0;
// }

// ----------------------------------slight better----------------

// void lsa(vector<int>&arr, int n, int k){
//     int len = 0;
//     for(int i =0;i<n;i++){
//         int sum = 0;
//         for(int j = i;j<n;j++){
//             sum+=arr[j];
//             if(sum == k){
//                 len = max(len,j-i+1);
//             }
//         }
//     }
//     cout<<len<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int k;
//     cin>>k;
//     lsa(arr,n,k);
//     return 0;
// }
// ---------------------------slight better-----------------------------

// void lsa(vector<int>&arr, int n, int k){
//     map<int,int> prefixSum;
//     int sum = 0;
//     int maxlen = 0;
//     for(int i =0;i<n;i++){
//         sum+=arr[i];
//         if(sum == k){
//             maxlen = max(maxlen,i+1);
//         }

//         int rem = sum -k;
//         if(prefixSum.find(rem)!=prefixSum.end()){
//             int len = i - prefixSum[rem];
//             maxlen = max(len,maxlen);
//         }
//         if(prefixSum.find(sum) == prefixSum.end()){
//             prefixSum[sum] = i;
//         }
//     }
//     cout<<maxlen<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i =0;i<n;i++) cin>>arr[i];
//     int k;
//     cin>>k;
//     lsa(arr,n,k);
//     return 0;
// }
// ------------------------------------------------------------------

// most optimal 
// void lsa(vector<int>&arr, int n, int k){
//     int left = 0;
//     int right = 0;
//     int sum = a[0];
//     int maxlen = 0;
//     while(right<n){
//         while(left<=right && sum>k){
//             sum -=a[left];
//             left++;
//         }
//         if(sum==k){
//             maxlen = max(maxlen,right-left+1);
//         }
//         right++;
//         if(right<n) sum +=a[right];
//     }
//     cout<<maxlen;
// }
// most optimal------------------------------------------------------------------------

void lsa(vector<int>&arr, int n, int k){
    int right = 0;
    int left = 0;
    int sum = arr[0];
    int maxlen = 0;

    while(right<n){
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen = max(maxlen, right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    cout<<maxlen;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    lsa(arr,n,k);
    return 0;
}