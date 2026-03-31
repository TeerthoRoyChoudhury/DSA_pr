#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq = {1,2,3,4};

    dq.push_back(5);
    dq.emplace_back(6);
    dq.pop_back();
    dq.pop_front();
    //  all same as list

    for(auto it = dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;
}