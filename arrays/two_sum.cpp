#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>&arr, int n, int t){
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        if(mpp.find(t-arr[i])!=mpp.end()){
            return {i, mpp[t-arr[i]]};
        }
        
        mpp[arr[i]] = i;
    }
    return {};
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int t;
    cin >> t;

    vector<int> ans = twosum(arr, n, t);

    if(ans.size() == 2){
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No solution" << endl;
    }

    return 0;
}

