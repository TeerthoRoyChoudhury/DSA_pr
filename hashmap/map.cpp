#include <bits/stdc++.h>
using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];

//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it:mpp){
//         cout<<it.first<<"-->"<<it.second<<endl;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<mpp[number]<<" ";
//     }

//     return 0;
// }

// character mapping

int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mpp[ch]<<" ";
    }

    return 0;

}