// #include <bits/stdc++.h>
// using namespace std;

// void Leader(vector<int>&arr, int n){
//     vector<int>temp;
//     for(int i = 0;i<n-1;i++){
//         int check = 0;
//         for(int j = i;j<n;j++){
//             if(arr[j]>arr[i]){
//                 check = 1;
//                 break;
//             }
//         }
//         if(check == 0){
//             temp.emplace_back(arr[i]);
//         }
//     }
//     temp.emplace_back(arr[n-1]);
//     for(auto it:temp){
//         cout<<it<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     Leader(arr,n);
//     return 0;
// }

// -----optimal----------------------------------------
#include <bits/stdc++.h>
using namespace std;

void leader(vector<int>&arr, int n){
    vector<int>temp;
    int max = INT_MIN;
    for(int i = n-1;i>=0;i--){
        if(arr[i]>max){
            max = arr[i];
            temp.emplace_back(arr[i]);
        }
    }
    for(auto it:temp){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    leader(arr,n);
    return 0;
}