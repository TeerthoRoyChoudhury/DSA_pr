#include <bits/stdc++.h>
using namespace std;

void remove_occurance(string &s, string part){
    while(s.length()>0&&s.find(part)<s.length()){
        s.erase(s.find(part),part.size());
    }
}

int main(){
    string s;
    string part;
    getline(cin,s);
    getline(cin,part);
    remove_occurance(s,part),
    cout<<s<<endl;
    return 0;
}