#include <bits/stdc++.h>
using namespace std;

// implementing kaddane's aligno

void kaddane(vector<int>&arr, int n){
    int maxi = 0;
    int sum = 0;
    int i = 0;
    while(i<n){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxi = max(maxi,sum);
    }
    cout<<maxi<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    kaddane(arr,n);
    
    return 0;
}