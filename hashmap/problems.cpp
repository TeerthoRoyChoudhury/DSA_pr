#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int val = INT_MIN;
    int key = 0;
    for(auto it:mpp){
        if(it.second>val){
            val = it.second;
            key = it.first;
        }
    }
    cout<<key<<endl;

    return 0;
    
}