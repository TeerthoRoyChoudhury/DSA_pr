// #include <bits/stdc++.h>
// using namespace std;

// void left_rotate(vector<int>&arr,int n, int d){
//     d = d%n;
//     vector<int> temp;
//     for(int i=0;i<=d-1;i++){
//         temp.emplace_back(arr[i]);

//     }
//     int index = 0;
//     for(int j=d;j<n;j++){
//         arr[index] = arr[j];
//         index++;
//     }
//     int last_index = n-d;
//     for(int i =0;i<temp.size();i++){
//         arr[last_index] = temp[i];
//         last_index++;
//     }
// }

// int main(){
//     int n,d;
//     cin>>n;
//     cin>>d;
//     vector<int> arr(n);
//     for(int i =0;i<n;i++) cin>>arr[i];
//     left_rotate(arr,n,d);
//     for(auto it:arr){
//         cout<<it<<" ";
//     }
//     return 0;
// }



// Holy fuck optimal

void left_rotate(vector<int>&arr, int n, int d){
    d = d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    left_rotate(arr,n,d);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}