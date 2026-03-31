#include<bits/stdc++.h>
using namespace std;

void intersection(vector<int>&a, vector<int>&b, int n, int m){
    int i =0;
    int j = 0;
    vector<int> temp;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            temp.emplace_back(a[i]);
            i++;
            j++;
        }
    }
    for(auto it:temp) cout<<it<<" ";
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int>b(m);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<m;i++) cin>>b[i];
    intersection(a,b,n,m);
    return 0;
    
}
