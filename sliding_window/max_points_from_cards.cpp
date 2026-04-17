#include<bits/stdc++.h>
using namespace std;

void max_points(vector<int>&arr, int n, int k){
    int max_sum = 0;
    int lsum = 0;
    int rsum = 0;
    for(int i = 0;i<k;i++){
        lsum+=arr[i];
    }
    max_sum = lsum;

    int rindex = n-1;
    for(int i = k-1;i>=0;i--){
        lsum = lsum-arr[i];
        rsum = rsum+arr[rindex];
        max_sum = max(max_sum,lsum+rsum);
        rindex--;
    }
    cout<<max_sum<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)cin>>arr[i];
    int k;
    cin>>k;
    max_points(arr,n,k);
    return 0;
}