// Longest Substring without repeating character

// My steps:
// #include <bits/stdc++.h>
// using namespace std;

// int maxlensub(string &s){
//     int max_len = 0;
//     for(int i = 0;i<s.size();i++){
//         map<int,int>mpp;
//         for(int j=i;j<s.size();j++){
//             mpp[s[j]]++;
//             bool found = false;
//             for(auto it:mpp){
//                 if(it.second>1){
//                     found = true;
//                     break;
//                 }
//             }
//             if(found == false){
//                 max_len = max(j-i+1,max_len);

//             }
//             else if(found==true){
//                 break;
//             }
//         }
//     }
//     return max_len;
// }

// int main(){
//     string s;
//     getline(cin,s);
//     cout<<maxlensub(s);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void maxsub(string &s){
    int max_len = 0;
    for(int i = 0;i<s.size();i++){
        vector<int>hash(256,0);
        for(int j = i;j<s.size();j++){
            if(hash[s[j]]==1) break;
            max_len = max(j-i+1,max_len);
            hash[s[j]]++;
        }
    }
    cout<<max_len<<endl;
}
int main(){
    string s;
    getline(cin,s);
    maxsub(s);
    return 0;
}