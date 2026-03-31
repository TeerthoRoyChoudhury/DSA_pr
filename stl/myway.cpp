#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false;
}

int main(){

    pair<int,int> arr[] = {{1,2},{2,1},{4,2}};
    //sort it according to second element
    //if second element is same then
    // sort it to first element but in desending form
    // xpected ans : {{2,1},{4,2},{1,2}}
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,comp);

    for(int i=0;i<n;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;

    }


    return 0;
}