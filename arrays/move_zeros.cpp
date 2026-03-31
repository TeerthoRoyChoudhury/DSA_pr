// #include <bits/stdc++.h>
// using namespace std;

// void zeros_toend(int arr[], int n){
//     int cnt = 0;
//     for(int i = 0;i<n;i++){
//         if(arr[i]==0){
//             cnt++;
//         }
//     }
    
//     vector<int>temp;
//     for(int i = 0;i<n;i++){
//         if(arr[i]!=0) temp.emplace_back(arr[i]);
//     }
//     for(int i = 0;i<=n-(cnt+1);i++){
//         arr[i] = temp[i];
//     }
    
//     for(int i=n-cnt;i<n;i++){
//         arr[i] = 0;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++) cin>>arr[i];
//     zeros_toend(arr,n);
//     for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }

// --------------OPTIMAL APPROACH------------------------------------
#include <bits/stdc++.h>
using namespace std;


void Move_zeros(vector<int>&arr,int n){
    int j = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    Move_zeros(arr,n);
    for(auto it:arr)cout<<it<<" ";
    return 0;
}