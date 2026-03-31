// #include <bits/stdc++.h>
// using namespace std;

// void union_arrays(int arr[],int arr2[],int n,int m){
//     set<int> st;
//     for(int i =0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     for(int j =0;j<m;j++){
//         st.insert(arr2[j]);
        
//     }
//     for(auto it:st){
//         cout<<it<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++) cin>>arr[i];
//     int m;
//     cin>>m;
//     int arr2[m];
//     for(int i=0;i<m;i++) cin>>arr2[i];
//     union_arrays(arr,arr2,n,m);
//     return 0;
// }
// -----------OPTIMAL-------------------------


void optimal_sort(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;

    vector<int> result;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            if(result.size()==0|| result.back()!=arr1[i]){
                result.emplace_back(arr1[i]);
            }
            i++;
        }
        else{
            if(result.size()==0|| result.back()!=arr2[j]){
                result.emplace_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(result.size()==0|| result.back()!=arr2[j]){
            result.emplace_back(arr2[j]);
        }
        j++;
    }

    while(i<n1){
        if(result.size()==0|| result.back()!=arr1[i]){
            result.emplace_back(arr1[i]);
        }
        i++;
    }
    for(auto it:result)cout<<it<<" ";
}

int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int>arr2(m);
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    optimal_sort(arr1,arr2);

    return 0;

}