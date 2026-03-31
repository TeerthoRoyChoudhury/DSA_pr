// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> pos;
//         vector<int> neg;
//         for(int i = 0;i<nums.size();i++){
//             if(nums[i]>0) pos.emplace_back(nums[i]);
//             else neg.emplace_back(nums[i]);
//         }
//         for(int i = 0;i<nums.size()/2;i++){
//             nums[2*i] = pos[i];
//             nums[2*i+1] = neg[i];
//         }
//         return nums;
        
//     }
// };

// O(N)---------------------------------------------------------------------------

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>temp(n,0);
//         int pos = 0;
//         int neg = 1;
//         for(int i = 0;i<n;i++){
//             if(nums[i]<0){
//                 temp[neg] = nums[i];
//                 neg+=2;

//             }
//             else{
//                 temp[pos] = nums[i];
//                 pos+=2;
//             }
//         }
//         return temp;
        
//     }
// };

// if(+ve no. != -ve no.)
#include <bits/stdc++.h>
using namespace std;


void rearrange(vector<int>&arr, int n){
    vector<int>pos;
    vector<int>neg;
    for(int i = 0;i<n;i++){
        if(arr[i]>0) pos.emplace_back(arr[i]);
        else neg.emplace_back(arr[i]);
    }
    
    if(pos.size()>neg.size()){
        for(int i = 0;i<neg.size();i++){
            arr[i*2] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size();i<pos.size();i++){
            arr[index] = pos[i];
            index++;
            
        }
    }
    else{
        for(int i = 0;i<pos.size();i++){
            arr[i*2] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i = pos.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
    }
    
}