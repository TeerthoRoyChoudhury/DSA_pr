#include<bits/stdc++.h>
using namespace std;

void smallestinteger(vector<int>&arr, int n){
    int j = 0;
    int stop=0;
    int sum = 0;
    while(j<arr.size()-1){
        if(arr[j]+1!=arr[j+1]){
            stop =j;
            break;
        }
        j++;
    }

    for(int i = 0;i<=stop;i++){
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i<arr.size();i++){
        if(sum==arr[i]){
            sum++;
        }
    }
    cout<<sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    smallestinteger(arr,n);

    return 0;

}