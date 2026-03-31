#include <bits/stdc++.h>
using namespace std;

void Rd(vector<int> &arr, int n){
    set<int> st;
    for(int i = 0;i<n;i++){
        st.insert(arr[i]);

    }
    int index = 0;
    for(auto it:st){
        arr[index] = it;
        index++;
    }
    cout<<index<<endl;
}

void optimal_Rd(vector<int>&arr,int n){
    int index = 0;
    for(int j =1;j<n;j++){
        if(arr[j]!=arr[index]){
            arr[index+1] = arr[j];
            index ++;
        }
    }
    cout<<index+1<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    optimal_Rd(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }

    return 0;
}
