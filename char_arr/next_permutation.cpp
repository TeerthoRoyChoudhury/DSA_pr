#include <bits/stdc++.h>
using namespace std;

bool isfreqsame(vector<int>&a, vector<int>&b){
    return a==b;
}

bool check_permutation(string &a, string&b){
    vector<int>temp(26,0);
    for(int i = 0;i<a.size();i++){
        temp[a[i]-'a']++;
    }
    int i = 0;
    int j = a.size()-1;
    while(j<b.size()){
        vector<int>another_temp(26,0);
        int x = i;
        while(x<=j){
            another_temp[b[x]-'a']++;
            x++;
        }
        if(isfreqsame(temp,another_temp)==1) return true;
        i++;
        j++;
    }
    return false;
}

int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    cout<<check_permutation(a,b)<<endl;


    return 0;
}

