#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[5] = {34,1,23,56,11};

//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr+n);


//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


int main(){
    vector<int> v = {23,56,7,12,1,97,12};
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}

