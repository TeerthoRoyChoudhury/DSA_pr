// #include <bits/stdc++.h>
// using namespace std;


// bool linear_search(vector<int>&arr, int x){
//     for(int i = 0;i<arr.size();i++){
//         if(arr[i]==x){
//             return true;
//         }
//     }

//     return false;
// }

// void lcs(vector<int>&arr){
//     int n = arr.size();
//     int longest = 1;
//     for(int i = 0;i<n;i++){
//         int x = arr[i];
//         int cnt = 1;
//         while(linear_search(arr,x+1)==true){
//             x = x+1;
//             cnt++;
//         }
//         longest = max(longest,cnt);
//     }
    
//     cout<<longest;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     lcs(arr);
//     return 0;
// }

// Optimal approach


// #include <bits/stdc++.h>
// using namespace std;


// void lcs(vector<int>&arr , int n){
//     sort(arr.begin(),arr.end());
//     int len = 1;
//     int cnt = 0;
//     int last_small = INT_MIN;

//     for(int i = 0;i<n;i++){
//         if(n == 0){
//             cout<<0;
//             break;
//         }
//         if(arr[i]-1==last_small){
//             last_small = arr[i];
//             cnt+=1;
//         }
//         else if(arr[i]==last_small){
//             continue;
//         }
//         else if(arr[i]-1!=last_small){
//             last_small = arr[i];
//             cnt = 1;
//         }
//         len = max(len,cnt);
//     }
//     cout<<len<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     lcs(arr,n);
//     return 0;
// }

// --------------More Optimal


#include <bits/stdc++.h>
using namespace std;

int lsc(vector<int>&arr, int n){
    set<int>st;
    if(n==0)return 0;
    for(int i = 0;i<n;i++){
        st.insert(arr[i]);
    }

    int len  = 1;
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt+=1;
            }
            len = max(cnt,len);
        }
    }
    return len;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<lsc(arr,n);
    return 0;
}