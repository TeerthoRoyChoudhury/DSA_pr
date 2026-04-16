#include <bits/stdc++.h>
using namespace std;


void maxsub(vector<int>&arr,int n, int k){
    int sum = 0;
    for(int i = 0;i<k;i++){
        sum+=arr[i];
    }
    int max_sub = sum;
    for(int i = k;i<n;i++){
        sum  = sum - arr[i-k];
        sum = sum + arr[i];
        max_sub = max(max_sub,sum);
    }
    cout<<max_sub;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int key;
    cin>>key;
    maxsub(arr,n,key);
    return 0;
}