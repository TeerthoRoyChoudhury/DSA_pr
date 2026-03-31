// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int>&arr, int low, int mid, int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid+1;
//     while(left<=mid&&right<=high){
//         if(arr[left]<=arr[right]){
//             temp.emplace_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.emplace_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         temp.emplace_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.emplace_back(arr[right]);
//         right++;
//     }
//     for(int i = low;i<=high;i++){
//         arr[i] = temp[i-low];
//     }

// }

// void sort(vector<int>&arr,int low, int high){
//     if(low==high) return;
//     int mid = (low+high)/2;
//     sort(arr,low,mid);
//     sort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }

// void second_largest(vector<int>&arr, int n){
//     sort(arr,0,n-1);
//     int s_largest;
//     int largest = arr[n-1];
//     for(int i = n-2;i>=0;i--){
//         if(arr[i]!=largest){
//             s_largest = arr[i];
//             break;
//         }
//     }
//     cout<<s_largest;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     second_largest(arr,n);

//     return 0;
// }
// //O(logn + n);
// ------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;


// void second_largest(vector<int>&arr, int n){
//     int largest = INT_MIN;
//     for(int i = 0;i<n;i++){
//         if(arr[i]>largest) largest = arr[i];
        
//     }
    
//     int s_largest = -1;
//     for(int i = 0;i<n;i++){
//         if(arr[i]>s_largest && arr[i]<largest){
//             s_largest = arr[i];
//         }
//     }
//     cout<<s_largest;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i = 0;i<n;i++) cin>>arr[i];
//     second_largest(arr,n);
//     return 0;
// }  
// 0(2N) Approach
// --------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int>&arr, int n){
    int largest = arr[0];
    int s_largest = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            s_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>s_largest){
            s_largest = arr[i];
        }
    }
    return s_largest;
}

int second_smallest(vector<int>&arr, int n){
    int smallest = arr[0];
    int second_small = INT_MAX; 
    for(int i = 1;i<n;i++){
        if(arr[i]<smallest){
            second_small = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<second_small){
            second_small = arr[i];

        }
    }
    return second_small;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<second_largest(arr,n)<<endl;
    cout<<second_smallest(arr,n)<<endl;
    
}