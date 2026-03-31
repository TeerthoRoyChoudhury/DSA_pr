#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;

    mp[1] = 2;
    mp.emplace(3,1);
    mp.insert({2,4});

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp[1]<<endl;
    cout<<mp[5]<<endl;

    auto it = mp.find(3);
    cout<<(*it).second<<endl;

    return 0;

}


void explainMultimap(){
    // does everything same like map
    // but in addition it can store same keys
}

